#include <bits/stdc++.h>

using namespace std;

//* Padding Concept in Class

//! Example:-5
class MyClass
{
    int a;
    int b;
    bool x;
    string str; // string class size 24 bytes hoga
    int c;
};

int main()
{
    cout << sizeof(MyClass) << endl;
    // Only bool is a biggest datatype here so No Padding is required

    return 0;
}