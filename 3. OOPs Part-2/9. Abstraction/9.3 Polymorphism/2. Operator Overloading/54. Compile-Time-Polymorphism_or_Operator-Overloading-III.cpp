#include <bits/stdc++.h>

using namespace std;

//! Program to demonstrate Operator Overloading or Compile-Time Polymorphism - III

class Vector
{
private:
    int x, y; // private data members

public:
    Vector(int x, int y) : x(x), y(y) {};

    void display()
    {
        cout << "(" << x << ", " << y << ")\n";
    }

    // Operator Overloading

    void operator-(const Vector &src)
    {
        // this-> would point to v1
        // src would point to v2

        this->x -= src.x;
        this->y -= src.y;
    }
};

int main()
{
    Vector v1(3, 4);

    Vector v2(1, 2);

    cout << "Before operator overloading" << endl;

    v1.display();
    v2.display();

    cout << "After operator overloading" << endl;

    v1 - v2;

    // Subtraction ans (v2 - v1) should be stored in v2

    v1.display();

    v2.display();

    return 0;
}