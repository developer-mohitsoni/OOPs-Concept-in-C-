#include <bits/stdc++.h>

using namespace std;

//! Static Data Members:-

// 1)- It is initialized to 0, whenever the first object of it's class is created. No other initialization is permitted.

// 2)- For making any data member static, we use 'static' keyword.

// 3)- Only one copy of static data member is created and shared by all.

class Demo
{
private:
    static int z; // Static data member initialize with 0
    int x, y;

public:
    void getData(int a, int b)
    {
        x = a;
        y = b;
        z = z + 1;
    }
    void showData()
    {
        cout << "x = " << x << endl;
        cout << "y = " << y << endl;
        cout << "z = " << z << endl;
    }
};

int Demo::z; // Initialization of static data member outside class

int main()
{
    Demo obj1, obj2;
    obj1.getData(10, 20);
    obj1.showData();

    obj2.getData(30, 40);
    obj2.showData();
    obj1.showData(); // Output: x = 10, y = 20, z = 2

    return 0;
}