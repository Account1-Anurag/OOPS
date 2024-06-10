#include <bits/stdc++.h>
using namespace std;
class fruit
{
public:
    virtual void init() = 0;
    static int no_fruits;
    void accept(int x)
    {
        no_fruits += x;
    }
    void display()
    {
        cout << "The total no. of fruits :" << no_fruits << endl;
    }
};
int fruit::no_fruits = 0;
class apple : public fruit
{
public:
    void init() { ; }
    int no_apples;
    apple()
    {
        no_apples = 0;
    }
    void accept()
    {
        cout << "The added number of apple ";
        int x = 0;
        cin >> x;
        no_apples += x;
        fruit::accept(x);
    }
    void display()
    {
        fruit::display();
        cout << "The total no of apples in basket" << no_apples << endl;
    }
};
class mango : public fruit
{
public:
    void init() { ; }
    int no_mango;
    mango()
    {
        no_mango = 0;
    }
    void accept()
    {
        cout << "The added number of mango :";
        int x = 0;
        cin >> x;
        no_mango+=x;
        fruit::accept(x);
    }
    void display()
    {
        fruit::display();
        cout << "The total no. of mangoes in basket :" << no_mango << endl;
    }
};
int main()
{
    apple a1;
    mango m1;
    a1.accept();
    m1.accept();
    a1.display();
    m1.display();
    m1.accept();
    m1.display();
    return 0;
}