#include <bits/stdc++.h>

using namespace std;

//! Constructor Overloading:-

// C++ provides us one provision using which we can incorporate more than one constructor in a single program. BUT these constructors must have different type of arguments or different number of arguments. This provision of having more than one constructor in a single program is called a Constructor Overloading.

class Demo
{
private:
    int a;

public:
    // Default Constructor
    Demo();

    // Parameterized Constructor

    Demo(int m);

    // Copy Constructor

    Demo(const Demo &obj);

    void showData();
};

Demo::Demo()
{
    a = 10;
}

Demo::Demo(int m)
{
    a = m;
}

Demo::Demo(const Demo &obj)
{
    a = obj.a;
}

void Demo::showData()
{
    cout << "a = " << a << endl;
}

int main()
{
    Demo obj1; // Default Constructor called
    obj1.showData();

    Demo obj2(5); // Parameterized Constructor called
    obj2.showData();

    Demo obj3(obj1); // Copy Constructor called
    obj3.showData();

    return 0;
}