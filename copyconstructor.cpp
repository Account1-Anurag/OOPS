#include <bits/stdc++.h>
using namespace std;

class class_name{
    int data_member1;
    string data_member;
    public:
    class_name(string name,int roll_no){
        data_member=name;
        data_member1=roll_no;
    }
    class_name(class_name &obj){
        data_member1=obj.data_member1;
        data_member=obj.data_member;
        }
        void display(){
            cout<<"name is "<<data_member;
        }

};

int main(){
    class_name std1("anurag",15);
    class_name std2(std1);
    std1.display();
    std2.display();
    return 0;
}