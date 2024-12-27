#include <bits/stdc++.h>

using namespace std;

//! Program to demonstrate Function Overloading or Compile-Time Polymorphism
class Geeks
{
public:
    // Function with 1 parameter

    void func(int x)
    {
        cout << "Value of x is " << x << endl;
    }

    // Function with same name BUT 1 double parameter

    void func(double x)
    {
        cout << "Value of x is " << x << endl;
    }

    // Function with same name BUT 2 int parameter

    void func(int x, int y)
    {
        cout << "Value of x is " << x << " and y is " << y << endl;
    }
};

int main()
{
    Geeks obj1;

    // Function being called depends on the parameters passed in the function.

    obj1.func(10);

    // func() is called with double value

    obj1.func(10.5);

    // func() is called with 2 int values

    obj1.func(20, 30);

    return 0;
}