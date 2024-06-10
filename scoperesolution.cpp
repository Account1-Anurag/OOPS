#include <iostream>
#include<string>
using namespace std;
class box{
    int length,width,height,vol;
    static int no_box;
    public:
       box(int x,int y,int z){
        length=x;
        width=y;
        height=z;   
        no_box++;
    }
    int cal_vol(){
        vol=length*width*height;
        return vol;
    }
    void display(){
        cout<<"No of boxes :"<<no_box<<endl;
        cout<<"volume of these boxes :"<<vol<<endl;
    }
    // static void add_box(){
    //     no_box++;
    // }


};
int box::no_box=0;
int main(){
    box box1(10,7,3);
   // box::add_box();
    
    box1.cal_vol();
    box1.display();
    box box2(75,55,76);
    //box::add_box();
    //box2.box_init(75,54,76);
    box2.cal_vol();
    box2.display();
    return 0;
}