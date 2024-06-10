#include <bits/stdc++.h>
using namespace std;
class student{
    private:
    string student_name;
    int roll_no;
    int student_age ;
    public:
    string getstudentname(){
        return student_name;
    }
    void setstudentname(string student_name){
        this -> student_name=student_name;
    }
    int getroll_no(){
        return roll_no;
    }
    void setroll_no(int roll_no){
        this->roll_no=roll_no;
    }
    int getstudentage(){
        return student_age;
    }
    void setstudentage(int student_age){
        this->student_age=student_age;
    }
};
int main(){
    student std1;
    std1.setstudentname("Anurag");
    std1.setroll_no(15);
    std1.setstudentage(18);
    cout<<"Student Name :"<<std1.getstudentname()<<endl;
    cout<<"Roll No. :"<<std1.getroll_no()<<endl;
    cout<<"Student age :"<<std1.getstudentage()<<endl;
    
    return 0;
}