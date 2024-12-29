#include <bits/stdc++.h>

using namespace std;

// Default Argument provides a way to give a default value to the arguments. If we don't supply the argument, it takes the default value, otherwise the passed value.

//! RULE:- Once we have started giving the default value, all next arguments must contain a default value.

void add(int a = 5, int b = 10)
{
    cout << "Sum is: " << a + b << endl;
}

int main()
{
    add();       // Default values will be used
    add(10);     // Default values will be used
    add(10, 20); // Custom values will be used

    return 0;
}