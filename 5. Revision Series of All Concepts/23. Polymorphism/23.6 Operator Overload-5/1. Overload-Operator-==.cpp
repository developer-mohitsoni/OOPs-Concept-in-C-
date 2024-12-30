#include <bits/stdc++.h>

using namespace std;

//! Operator Overloading:- Double Equal(==)

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

    bool operator==(Demo &obj)
    {
        return (a == obj.a);
    }
};

int main()
{
    Demo d1, d2;
    d1.getData();
    d1.putData();

    d2.getData();
    d2.putData();

    if (d1 == d2)
    {
        cout << "Both objects are equal." << endl;
    }
    else
    {
        cout << "Both objects are not equal." << endl;
    }

    return 0;
}