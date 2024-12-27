#include <bits/stdc++.h>

using namespace std;

//! NOTE:-

// static data members ke variable ko outside the class use karte hai using scope resolution operator.

// static member function sirf uni member ko access kar paayega jo static keyword se define hai

class ABC
{
public:
    int x, y; // Non-static data members

    // Initialization List
    ABC() : x(0), y(0)
    {
    }

    static void print()
    {
        // no this pointer accessible.

        // __FUNCTION__ ek MACRO hai jo function ke name ko print karta hai in-build
        cout << "I am in Static " << __FUNCTION__ << endl;
    }
};

int main()
{
    ABC obj1;

    obj1.print(); // Output: I am in Static print

    ABC::print(); // Accessing static member function using class name without instance of class.

    ABC obj2;

    obj2.print(); // Output: I am in Static print

    ABC::print(); // Accessing static member function using class name without instance of class
    ABC::print(); // Accessing static member function using class name without instance of class

    return 0;
}