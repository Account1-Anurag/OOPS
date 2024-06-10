#include <iostream>
using namespace std;
class cuboid;
class sphere{
    int rad;
    double vol;
    public:
    void accept();
    void cal_vol();
    void display();
    friend void add_vol(sphere obj1,cuboid obj);

};
class cuboid{
    int length,breadth,height;
    double vol;
    public:
    void accept();
    void cal_vol();
    void display();
    friend void add_vol(sphere obj1,cuboid obj2);
};
void sphere::accept(){
    cout<<"ENTER the Radius of Sphere :";
    cin>>rad;
}
void sphere::cal_vol(){
    vol=4/3.0*3.14*rad*rad*rad; 
}
void sphere::display(){
    cout<<"the radius of sphere is :"<<rad<<endl;
    cout<<"The volume of sphere is : "<<vol<<endl;
}
void cuboid::accept(){
    cout<<"The value of Length:";
    cin>>length;
    cout<<"The value of breadth :";
    cin>>breadth;
    cout<<"The value of height :";
    cin>>height;
}
void cuboid::cal_vol(){
    vol=length*breadth*height;
}
void cuboid::display(){

    cout<<"length of cuboid :"<<length<<endl;
    
    cout<<"width of cuboid :"<<breadth<<endl;
   
    cout<<"height of cuboid :"<<height<<endl;
    cout<<"volume of cuboid :"<<vol<<endl;
  
}
void add_vol(sphere obj1,cuboid obj2){
    double total_vol=(obj1.vol+obj2.vol);
    cout<<"The total volume of cuboid and sphere is :"<<total_vol<<endl;
}

int main(){
    sphere sph;
    cuboid cub;
    sph.accept();
     
    sph.cal_vol();
 sph.display();
    cub.accept();
    cub.cal_vol();
   
    cub.display();
    add_vol(sph,cub);
    return 0;
}