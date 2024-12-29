#include <bits/stdc++.h>

using namespace std;

//! Copy Constructor:-

// Copy Constructor is a type of Constructor where name is similar to the Class name & which is automatically invoked.

// When we need to initialize the variables of an object with the values of variables of another object of same type, then we use the concept of Copy Constructor.

class Demo
{
private:
    int a;

public:
    Demo();

    // We use & here because there is no new object is created. We have to somehow reference to that object.

    //! If we don't use reference here i.e &, then it is repeatedly called the Default Constructor.
    Demo(Demo &z);

    void showData();
};

Demo::Demo()
{
    a = 10;
}

Demo::Demo(Demo &z)
{
    a = z.a;
}

void Demo::showData()
{
    cout << "a = " << a << endl;
}

int main()
{
    Demo obj1;
    obj1.showData();

    Demo obj2(obj1); // Copy Constructor
    obj2.showData();

    Demo obj3 = obj2; // Copy Constructor
    obj3.showData();

    return 0;
}