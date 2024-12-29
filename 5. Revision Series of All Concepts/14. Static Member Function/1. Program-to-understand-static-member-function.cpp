#include <bits/stdc++.h>

using namespace std;

//! Static Member Function:-

// 1)- Static Member Function can access only Static Data Member.

// 2)- Static Member Function is not a part of object like Static Data Member.

// 3)- Since, it is not the part of any object, it is call using the Class name.

class Demo
{
private:
    int x;
    static int y; // Static Data Member

public:
    void getData(int a)
    {
        x = a;
        y = y + 1;
    }
    void showData()
    {
        cout << "Value of x is: " << x << endl;
        cout << "Value of y is: " << y << endl;
    }

    static void showStaticData()
    {
        cout << "Value of y is: " << y << endl;
    }
};

int Demo::y; // Initialization of static data member outside class

int main()
{
    Demo obj1, obj2;

    obj1.getData(10);
    obj1.showData();

    Demo::showStaticData(); // Static Member Function can access Static Data Member using Class name

    obj2.getData(20);
    obj2.showData();

    Demo::showStaticData(); // Static Member Function can access Static Data Member using Class name

    obj1.showData();

    Demo::showStaticData(); // Static Member Function can access Static Data Member using Class name

    return 0;
}