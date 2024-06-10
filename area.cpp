#include <bits/stdc++.h> 
class Rectangle {
    // Write your code here.
     private:
     Rectangle(int l1,int b1){
        length = l1;
        breadth = b1;
    }
   
    int length ;
    int breadth ;
    public:
   
    
    void getArea(){
        return length * breadth;
    }
};