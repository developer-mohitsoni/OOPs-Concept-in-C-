#include <bits/stdc++.h>

using namespace std;

//! Operator Overloading (/)

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

    // With arguments and with return
    Demo operator/(Demo obj)
    {
        Demo temp;
        temp.a = a / obj.a;
        return temp;
    }
};

int main()
{
    Demo d1, d2, d3;

    d1.getData();
    d2.getData();

    d3 = d1 / d2;
    d3.putData();

    return 0;
}