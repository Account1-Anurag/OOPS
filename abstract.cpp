#include <bits/stdc++.h>
using namespace std;
class abstraction{
    private:
    int a,b;
    public:
    void set(int x,int y){
        a=x;
        b=y;
    }
    void display(){
        cout<<"value of a is "<<a<<endl;
        cout<<"value of b is "<<b<<endl;

    }
};
int main(){
    abstraction obj;
    // implementabstraction obj;
    obj.set(3,5);
    obj.display();
    return 0;
}