#include <bits/stdc++.h>

using namespace std;

//* const keyword in member function

class Abc
{
private:
    int x;
    int *y;
    int z; // Optional Parameter

public:
    // Default Construct
    Abc()
    {
        x = 10;
        y = new int(20);
    }

    // Parameterized  Construct with Default Parameter
    Abc(int _x, int *_y, int _z = 0)
    {
        x = _x;
        y = _y;
        z = _z;
    }

    int getX() const { return x; } // Now you cannot change the value of x

    void setX(int _val)
    {
        // We want to change the value of x in setter function here:- that's why we are not using const keyword here
        x = _val;
    }

    int getY() const { return *y; }

    void setY(int *_val)
    {
        // We want to change the value of y in setter function here:- that's why we are not using const keyword here
        *y = *_val;
    }

    int getZ() { return z; } // This function is not of constant type so you can modify the value of z if you need here:- Idealy don't do this inside getter function
};

// Function to print Abc object's data using const reference

//? Jab class ke object ko as an const argument pass karte hai toh uss function mai only constant function ko hi use kiya jaa skta hai.

// here:- printAbc() takes constant Abc object as an argument toh sirf constant function ko hi use kiya jaa skta hai inside this Abc class like:- getX(), getY()
void printAbc(const Abc &a)
{
    cout << a.getX() << endl;

    // cout << a.getZ() << endl; //! This will generate an error because getZ() function is not of constant type. Here we only perform those functions which has the const type.
}

int main()
{
    int *p = new int(5);
    Abc obj(20, p); // Default argument set to 0

    cout << obj.getX() << endl; // 20
    cout << obj.getY() << endl; // 5

    printAbc(obj);

    int *q = new int(25);

    cout << endl;

    Abc obj2(20, q, 50); // Overhead the default argument

    cout << obj2.getX() << endl; // 20
    cout << obj2.getY() << endl; // 25
    cout << obj2.getZ() << endl; // 50

    cout << endl;

    printAbc(obj2);

    return 0;
}