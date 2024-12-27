#include <bits/stdc++.h>

using namespace std;

//! Program to demonstrate Function Overloading or Compile-Time Polymorphism - II

int add(int a, int b)
{
    return a + b;
}

double add(double a, double b)
{
    return a + b;
}

int add(int a, int b, int c)
{
    return a + b + c;
}

int main()
{
    // Same name but different arguments and return type
    cout << add(5, 10) << endl;
    cout << add(5.5, 10.5) << endl;
    cout << add(5, 10, 15) << endl;

    return 0;
}