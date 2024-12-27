#include <bits/stdc++.h>

using namespace std;

//! Single Level Inheritance

class A
{
public:
    int id;

    void funA()
    {
        cout << "Function A of class A" << endl;
    }
};

// Derived Class

class B : public A
{
public:
    void funB()
    {
        cout << "Function B of class B" << endl;
    }
};

int main()
{
    B objB;

    objB.id = 10;
    objB.funA();
    objB.funB();

    return 0;
}