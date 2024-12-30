#include <bits/stdc++.h>

using namespace std;

//! Multiple Inheritance:-

// When there are more than one base class is being inherited by a single derived class, then it is called the concept of Multiple Inheritance.

// It means when there is one base class & it is being derived by another single derived class. Then it is called as Single Level Inheritance.

class A
{
protected:
    int a;

public:
    void input()
    {
        cout << "Enter the value of a: ";
        cin >> a;
    }
};

class B
{
protected:
    int b;

public:
    void getData()
    {
        cout << "Enter the value of b: ";
        cin >> b;
    }
};

class C : public A, public B
{
public:
    void addition()
    {
        cout << "Addition of a & b is: " << a + b << endl;
    }
};

int main()
{
    C objC;
    objC.input();
    objC.getData();

    objC.addition();

    return 0;
}