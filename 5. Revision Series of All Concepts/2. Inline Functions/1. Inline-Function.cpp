#include <bits/stdc++.h>

using namespace std;

// Functions is used to reduce Code redundancy as well as to save the memory space. When a function is invoked, a bunch of task is performed viz matching arguments, matching returns type and passing the control from calling place to definition and vice-versa.

// BUT when function definition consists of hardly one or two simple statements, then this bunch of task appears to be time consuming. Hence in order to save this time, C++ has the concept of "Inline Function."

// When a function is declared Inline, the Function body is replicated at function calling place.

//! Condition:- It must hardly contain one or two simple statements. No loop is used inside that function, No while, break-continue or switch statement is used. Only simple statements are allowed.

inline int square(int a)
{
    return a * a;
}
inline int cube(int a)
{
    return a * a * a;
}

int main()
{
    cout << "Square of 5 = " << square(5) << endl;
    cout << "Cube of 5 = " << cube(5) << endl;

    return 0;
}