#include <bits/stdc++.h>

using namespace std;

//! Hybrid Inheritance:-

// When we combine the concept of two or more basic Inheritance type (Single Inheritance, Multiple Inheritance, MultiLevel Inheritance, Hierarchical Inheritance) then the new type of Inheritance is referred to as Hybrid Inheritance.

class A
{
public:
    void putData()
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

class C
{
public:
    void message()
    {
        cout << "Function from class C" << endl;
    }
};

class D : public B, public C
{
public:
    void print()
    {
        cout << "Function from class D" << endl;
    }
};

int main()
{
    D obj;
    obj.putData();
    obj.display();
    obj.message();
    obj.print();

    return 0;
}