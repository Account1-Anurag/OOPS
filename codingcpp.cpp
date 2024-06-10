#include <bits/stdc++.h> 
#include<iostream>

using namespace std;

class ComplexNumbers {
    // Complete this class
    private:
    int realno;
    int imaginaryno;
    public:
    ComplexNumbers(int real , int imaginary){
        this->realno=real;
        this->imaginaryno=imaginary;
    }
    void plus(ComplexNumbers &c2){
        realno=realno+c2.realno;
        imaginaryno=imaginaryno+c2.imaginaryno;
    }
    void multiply(ComplexNumbers &c2){
        int temp=realno;
        realno=((realno*c2.realno)-(imaginaryno*c2.imaginaryno));
        imaginaryno=((imaginaryno*c2.realno)+(temp*c2.imaginaryno));
    }
    void print(){
        cout<<realno<<" "<<"+"<<" "<<"i"<<imaginaryno;
    }
};

int main() {
    int real1, imaginary1, real2, imaginary2;

    cin >> real1 >> imaginary1;
    cin >> real2 >> imaginary2;

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