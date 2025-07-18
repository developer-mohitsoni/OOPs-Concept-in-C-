#include <bits/stdc++.h>

using namespace std;

//! NOTE:-

// static data members ke variable ko outside the class use karte hai using scope resolution operator.

// static member function sirf uni member ko access kar paayega jo static keyword se define hai

class ABC
{
public:
    static int x, y; // shared variable to all instance of class now

    void printABC() const
    {
        cout << x << " " << y << endl;
    }
};

// Initialize of static data members outside class
int ABC::x = 10; // initialize static data member

int ABC::y = 20; // initialize static data member

int main()
{
    ABC obj1;

    obj1.printABC(); // 10 20

    obj1.x = 1;
    obj1.y = 2;

    obj1.printABC(); // 1 2

    ABC obj2;
    obj2.x = 4;
    obj2.y = 5;

    obj2.printABC(); // 4 5

    // As we are using static keyword variables so the value of obj1 is changed.

    obj1.printABC(); // 4 5

    return 0;
}