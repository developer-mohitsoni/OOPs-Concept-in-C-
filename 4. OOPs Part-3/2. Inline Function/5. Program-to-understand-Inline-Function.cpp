#include <bits/stdc++.h>

using namespace std;

//! Program to Understand Inline Function

//* NOTE:- Used with only small sized functions. So that executables are small (handled automatically by compiler optimization level).

inline void displayNum(int num)
{
    // Less overhead to regular function because displayNum() is not loading in call stack.
    cout << "The number is: " << num << endl;
}

int main()
{
    displayNum(10); // Inline Function Call

    displayNum(20); // Inline Function Call

    displayNum(30); // Inline Function Call

    return 0;
}