#include <bits/stdc++.h>

using namespace std;

//! MultiLevel Level Inheritance

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

class C : public B
{
public:
    void funC()
    {
        cout << "Function C of class C" << endl;
    }
};

int main()
{
    B objB;

    objB.id = 10;
    objB.funA();
    objB.funB();

    cout << "------------------------------------------------" << endl;

    C objC;

    objC.id = 20;
    objC.funA();
    objC.funB();
    objC.funC();

    return 0;
}