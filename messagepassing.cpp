#include <iostream>
#include  <ctime>
#include<string>
using namespace std;

class date{
    private:
    int day,month,year;
    public:

    date(){
    time_t t=time(NULL);
    tm* ptr =localtime(&t);
    day=ptr->tm_mday;
    month=ptr->tm_mon+1;
    year=ptr->tm_year+1900;
}
date(int x,int y,int z){
    x=day;
    y=month;
    z=year;
}
void display(){
    cout<<"The date is : "<<day<<"/"<<month<<"/"<<year;
}


};

int main(){
    
    return 0;
}