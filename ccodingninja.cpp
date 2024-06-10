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
        real=c1.realno+c2.realno;
        imaginary=c1.imaginaryno+c2.imaginaryno;
    }
    void multiply(ComplexNumbers &c2){
                   int newReal = real*c2.real - (imaginary*c2.imaginary);

            int newImaginary = c2.real*imaginary + real*c2.imaginary;

            real = newReal;

            imaginary = newImaginary;
    }
    void print(){
        cout<<real+(imaginary*i);
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

}c