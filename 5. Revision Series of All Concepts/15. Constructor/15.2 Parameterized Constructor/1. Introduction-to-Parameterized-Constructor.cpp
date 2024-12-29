#include <bits/stdc++.h>

using namespace std;

//! Parameterized Constructor:-

// Parameterized Constructor is a type of Constructor where name is similar to the Class name & which is automatically invoked.

// Constructor having arguments is called Default constructor.

class Demo
{
private:
    int a, b;

public:
    Demo(int m, int n)
    {
        a = m;
        b = n;
    }

    void showData()
    {
        cout << "a = " << a << endl;
        cout << "b = " << b << endl;
    }
};

int main()
{
    int x, y;
    cout << "Enter two numbers: ";
    cin >> x >> y;

    Demo obj(x, y);
    obj.showData();

    return 0;
}