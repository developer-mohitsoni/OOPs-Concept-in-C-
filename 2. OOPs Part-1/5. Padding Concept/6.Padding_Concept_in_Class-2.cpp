#include <bits/stdc++.h>

using namespace std;

//* Padding Concept in Class

//! Example:-2
class MyClass
{
    double a;
    double b;
    char x;
};

int main()
{
    cout << sizeof(MyClass) << endl;
    // Output depends on System Architecture and Padding

    return 0;
}