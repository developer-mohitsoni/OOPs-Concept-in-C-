#include <bits/stdc++.h>

using namespace std;

//! Abstraction using Access Specifier

class Abstraction
{
private:
    int a, b;

public:
    int age;
    int *id;

    // Method to set value of Private Data Member using Setter Method

    void setValue(int x, int y)
    {
        a = x;
        b = y;
    }

    void display()
    {
        cout << "Value of a: " << a << ", Value of b: " << b << endl;
    }
};

int main()
{
    Abstraction obj;

    obj.setValue(10, 20);

    //! Here we hide private data members which is not required for us.
    obj.display(); // Value of a: 10, Value of b: 20

    return 0;
}