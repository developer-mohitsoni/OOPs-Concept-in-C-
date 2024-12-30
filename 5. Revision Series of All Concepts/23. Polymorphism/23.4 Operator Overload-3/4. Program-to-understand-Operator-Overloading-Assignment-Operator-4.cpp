#include <bits/stdc++.h>

using namespace std;

//! Operator Overloading (*=)

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

    void operator*=(Demo &obj)
    {
        a = a * obj.a;
    }
};

int main()
{
    Demo d1, d2;

    d1.getData();
    d2.getData();

    d1.putData();
    d2.putData();

    d1 *= d2;

    d1.putData();

    return 0;
}