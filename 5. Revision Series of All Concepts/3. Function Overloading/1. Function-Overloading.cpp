#include <bits/stdc++.h>

using namespace std;

// Function Overloading is based on the Concept of Polymorphism.

// It enables us to write same name multiple functions/methods within a program. But we have a restriction that all the functions same name must follow as:-

// Difference should be in
// 1. Number of arguments
// 2. Data type of arguments
// 3. Order of arguments
// 4. Return type

// Example:-
// int add(int a, int b)
// int add(int a, float b)
// int add(int a, int b, int c)

void add(int a, int b)
{
    cout << "Sum of two numbers is: " << a + b << endl;
}
void add(int a, float b)
{
    cout << "Sum of two numbers is: " << a + b << endl;
}
void add(int a, int b, int c)
{
    cout << "Sum of three numbers is: " << a + b + c << endl;
}

int main()
{
    add(5, 10);

    // To ensure the correct overload is called, you can explicitly specify the second argument as a float by using 'f' or casting:
    add(5, 10.50f);

    add(5, 10, 15);

    return 0;
}