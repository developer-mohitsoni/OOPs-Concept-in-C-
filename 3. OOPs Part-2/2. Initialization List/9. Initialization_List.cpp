#include <bits/stdc++.h>

using namespace std;

//* Initialization List in const keyword

class Abc
{
private:
    const int x;

public:
    // Parameterized Constructor New Style Way:-

    // Initializing const member in the initialization list
    Abc(int value) : x(value)
    {
        // x = 20; // ❌ Error: Cannot assign to a const variable
    }

    void display() const
    {
        cout << "Value of x is: " << x << endl;
    }
};

int main()
{
    Abc obj(10);

    obj.display(); // Value of x is: 10

    return 0;
}