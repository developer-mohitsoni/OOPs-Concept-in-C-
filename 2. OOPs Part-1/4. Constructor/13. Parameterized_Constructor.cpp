#include <bits/stdc++.h>

using namespace std;

//* Parameterized Constructor in Class

//? In C++, the const keyword after a member function (such as int getX() const) ensures that the member function does not modify the state of the object on which it is called. This is particularly important when you want to provide read-only access to private or protected member variables of a class.

class Point
{
private:
    int x, y;

public:
    // Parameterized Constructor
    Point(int x1, int y2)
    {
        x = x1;
        y = y2;
    }
    // Getter Method
    int getX() const
    {
        return x;
    }
    // Getter Method
    int getY() const
    {
        return y;
    }
};

int main()
{
    //! NOTE:- You can easily access the private data members of this class directly by using the Explicit Default Constructor and Parameterized Constructor but not Default Constructor

    // Constructor Called Automatically

    Point p(10, 20); // Implicit Call

    // Access value assigned by constructor
    cout << "Value of x: " << p.getX() << endl;
    cout << "Value of y: " << p.getY() << endl;

    p = Point(40, 60); // Explicit Call
    cout << "Value of x: " << p.getX() << endl;
    cout << "Value of y: " << p.getY() << endl;

    return 0;
}