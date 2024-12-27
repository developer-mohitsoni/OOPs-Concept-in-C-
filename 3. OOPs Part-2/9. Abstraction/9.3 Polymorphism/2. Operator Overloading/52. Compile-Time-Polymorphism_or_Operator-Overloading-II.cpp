#include <bits/stdc++.h>

using namespace std;

//! Program to demonstrate Operator Overloading or Compile-Time Polymorphism

class Complex
{
private:
    int real, imag; // private data members

public:
    Complex(int real, int imag)
    {
        this->real = real;
        this->imag = imag;
    }

    // This is automatically called when '+' is used with b/w two complex objects.

    Complex operator+(const Complex &other) const
    {
        return Complex(real + other.real, imag + other.imag);
    }

    void print()
    {
        cout << real << " + " << imag << "i" << endl;
    }
};

int main()
{
    Complex c1(3, 4);

    Complex c2(1, 2);

    Complex c3 = c1 + c2;

    c3.print(); // Output: 4 + 6i

    return 0;
}