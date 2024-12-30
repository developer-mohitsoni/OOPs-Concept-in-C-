#include <bits/stdc++.h>

using namespace std;

//! Operator Overloading:- Adding Complex Number

class Complex
{
private:
    int r, i;

public:
    void getData()
    {
        cout << "Enter the real part of a: ";
        cin >> r;

        cout << "Enter the imaginary part of a: ";
        cin >> i;
    }

    void putData()
    {
        cout << "Real = " << r << "\tImag = " << i << endl;
    }

    Complex operator+(Complex obj)
    {
        Complex temp;

        temp.r = r + obj.r;
        temp.i = i + obj.i;

        return temp;
    }
};

int main()
{
    Complex a, b, c;

    a.getData();
    a.putData();

    b.getData();
    b.putData();

    c = a + b;

    cout << "Sum of Complex Numbers:" << endl;
    c.putData();

    return 0;
}