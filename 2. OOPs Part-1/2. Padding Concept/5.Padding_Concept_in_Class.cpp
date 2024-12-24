#include <bits/stdc++.h>

using namespace std;

//* Padding Concept in Class

//! Example:-1
class MyClass
{
    int a;
    int b;
    bool x;
};

int main()
{
    cout << sizeof(MyClass) << endl;
    // Output depends on System Architecture and Padding

    return 0;
}