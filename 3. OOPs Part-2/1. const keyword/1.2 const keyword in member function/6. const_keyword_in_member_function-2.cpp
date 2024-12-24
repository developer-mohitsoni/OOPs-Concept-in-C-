#include <bits/stdc++.h>

using namespace std;

//* const keyword in member function

class Abc
{
private:
    int x;
    int *y;

public:
    // Default Construct
    Abc()
    {
        x = 10;
        y = new int(20);
    }

    // Parameterized  Construct

    Abc(int _x, int *_y)
    {
        x = _x;
        y = _y;
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
};

// Function to print Abc object's data using const reference

//? Jab class ke object ko as an const argument pass karte hai toh uss function mai only constant function ko hi use kiya jaa skta hai.

// here:- printAbc() takes constant Abc object as an argument toh sirf constant function ko hi use kiya jaa skta hai inside this Abc class like:- getX(), getY()
void printAbc(const Abc &a)
{
    cout << a.getX() << endl;
}

int main()
{
    int *p = new int(5);
    Abc obj(20, p);

    cout << obj.getX() << endl; // 20
    cout << obj.getY() << endl; // 5

    printAbc(obj); // 20

    return 0;
}