#include <bits/stdc++.h>

using namespace std;

//! Operator Overloading (++)

class Demo
{
private:
    int a;

public:
    void getData()
    {
        cout << "Enter the value of a: ";
        cin >> a;
    }

    void putData()
    {
        cout << "Value of a: " << a << endl;
    }

    // For Increment Prefix Operator
    void operator++()
    {
        a++;
    }

    // For Increment Postfix Operator
    void operator++(int)
    {
        a++;
    }
};

int main()
{
    Demo d1;

    d1.getData();

    cout << "Before increment: ";
    d1.putData();

    // Prefix Increment
    ++d1; // Increment using operator++

    cout << "After increment: ";
    d1.putData();

    cout << "Before increment: ";
    d1.putData();

    // Postfix Increment
    d1++; // Increment using operator++(int)

    cout << "After increment: ";
    d1.putData();

    return 0;
}