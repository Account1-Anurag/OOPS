#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    // Complete this class
    private:
    int real;
    int imaginary;
    public:
    ComplexNumbers(int realno , int imaginaryno){
        real=realno;
        imaginary=imaginaryno;
    }
    void plus(ComplexNumbers &c2){
        real=real+c2.real;
        imaginary=(imaginary+c2.imaginary)*i;
    }
    void multiply(ComplexNumbers &c2){
        
    }
    void print(){
        cout<<real+imaginary;
    }

};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 ;
    cin >> imaginary1;
    cin >> real2 ;
    cin >> imaginary2;

    ComplexNumbers c1(real1, imaginary1);
    ComplexNumbers c2(real2, imaginary2);

    int choice;
    cin >> choice;

    if (choice == 1) {
        c1.plus(c2);
        c1.print();
    } else if (choice == 2) {
        c1.multiply(c2);
        c1.print();
    } else {
        return 0;
    }

}