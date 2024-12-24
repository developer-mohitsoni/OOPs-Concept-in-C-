#include <bits/stdc++.h>

using namespace std;

//* Padding Concept in Class

//! Example:-3
class MyClass
{
    double a;
    double b;
    char x;
    char y;
};

int main()
{
    cout << sizeof(MyClass) << endl;
    // Output depends on System Architecture and Padding

    return 0;
}