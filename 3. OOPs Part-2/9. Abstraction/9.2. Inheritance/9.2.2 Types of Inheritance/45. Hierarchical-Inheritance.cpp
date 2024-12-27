#include <bits/stdc++.h>

using namespace std;

//! Hierarchical Inheritance

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

class C : public A
{
public:
    void funC()
    {
        cout << "Function C of class C" << endl;
    }
};

class D : public A
{
public:
    void funD()
    {
        cout << "Function D of class D" << endl;
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
    objC.funC();

    cout << "------------------------------------------------" << endl;

    D objD;

    objD.id = 30;
    objD.funA();
    objD.funD();

    return 0;
}