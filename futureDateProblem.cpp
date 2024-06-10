#include<iostream>
#include<ctime>
using namespace std;
class date{
    private:
    int day,month,year;
    public:
    date(){
        time_t t=time(NULL);
        tm *ptr=localtime(&t);
        day=ptr->tm_mday;
        month=ptr->tm_mon+1;
        year=ptr->tm_year+1900;
    }
    bool isLeapyear(int year){
        return ((year%100!=0)&&(year%4==0)||(year%400==0));
    }
    void calculate_Date(int daystoadd){
        while(daystoadd>0){
            int daysinmonth;
            if(month==2){;
                daysinmonth=isLeapyear(year)?29:28;
            }
            else if(month==4||month==6||month==9||month==11){
                daysinmonth=30;
            }
            else{
                daysinmonth=31;
            }
            if(day+daystoadd>daysinmonth){
                daystoadd-=(daysinmonth-day+1);
                day=1;
                month++;
                if(month>12){
                    month=1;
                    year++;
                }
            }
            else{
                day+=daystoadd;
                daystoadd=0;
            }
        }
    }
    void display(){
        cout<<"future date : "<<day<<"/"<<month<<"/"<<year<<endl;
    }
};
int main(){
    date currentdate;
    int daystoadd;
    cout<<"Enter the days to add :";
    cin>>daystoadd;
    date futuredate=currentdate;
    futuredate.calculate_Date(daystoadd);
    futuredate.display();
}