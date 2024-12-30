#include <bits/stdc++.h>

using namespace std;

//! Operator Overloading (=)

class Demo
{
private:
    int a, b;

public:
    void getData()
    {
        cout << "Enter the value of a: ";
        cin >> a;

        cout << "Enter the value of b: ";
        cin >> b;
    }

    void putData()
    {
        cout << "Value of a: " << a << endl;
        cout << "Value of b: " << b << endl;
    }

    void operator=(Demo &obj)
    {
        a = obj.a;
        b = obj.b;
    }
};

int main()
{
    Demo d1, d2;
    d1.getData();

    d2 = d1;

    cout << "After assigning values from d1 to d2:" << endl;
    d2.putData();

    return 0;
}