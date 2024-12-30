#include <bits/stdc++.h>

using namespace std;

//! Hierarchical Inheritance:-

// When one base class is being inherited by multiple derived classes, then this is called the concept of the Hierarchical Inheritance.

class A
{
public:
    void message()
    {
        cout << "Function from class A" << endl;
    }
};

class B : public A
{
public:
    void display()
    {
        cout << "Function from class B" << endl;
    }
};

class C : public A
{
public:
    void putData()
    {
        cout << "Function from class C" << endl;
    }
};

int main()
{
    B objB;
    C objC;

    objB.message();
    objB.display();

    objC.message();
    objC.putData();

    return 0;
}