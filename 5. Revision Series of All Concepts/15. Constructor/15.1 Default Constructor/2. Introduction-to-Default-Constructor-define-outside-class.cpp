#include <bits/stdc++.h>

using namespace std;

//! Default Constructor:-

// Default Constructor is a type of Constructor where name is similar to the Class name & which is automatically invoked.

// Constructor having no arguments is called Default constructor.

class Demo
{
private:
    int a, b;

public:
    Demo();

    void showData();
};

Demo::Demo()
{
    a = 10;
    b = 20;
}

void Demo::showData()
{
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;
}

int main()
{
    Demo obj;
    obj.showData();

    return 0;
}