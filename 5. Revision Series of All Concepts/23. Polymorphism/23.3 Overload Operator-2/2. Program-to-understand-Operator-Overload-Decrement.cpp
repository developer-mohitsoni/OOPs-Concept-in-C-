#include <bits/stdc++.h>

using namespace std;

//! Operator Overloading (--)

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

    // For Decrement Prefix Operator
    void operator--()
    {
        a--;
    }

    // For Decrement Postfix Operator
    void operator--(int)
    {
        a--;
    }
};

int main()
{
    Demo d1;

    d1.getData();

    cout << "Before decrement: ";
    d1.putData();

    // Prefix Increment
    --d1; // Decrement using operator++

    cout << "After decrement: ";
    d1.putData();

    cout << "Before decrement: ";
    d1.putData();

    // Postfix Increment
    d1--; // Decrement using operator++(int)

    cout << "After decrement: ";
    d1.putData();

    return 0;
}