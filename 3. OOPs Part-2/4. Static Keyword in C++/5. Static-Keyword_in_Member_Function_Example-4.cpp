#include <bits/stdc++.h>

using namespace std;

//! NOTE:-

// static data members ke variable ko outside the class use karte hai using scope resolution operator.

// static member function sirf uni member ko access kar paayega jo static keyword se define hai

class ABC
{
public:
    static int x, y; // static data members

    int z;

    static void printABC()
    {
        cout << x << " " << y << endl;

        // cout << z; //* Non-static data members can not be used inside static member function
    }
};

// Initialization of static data members

// x and y of class ABC

int ABC::x = x;

int ABC::y = y;

// Driver Code

int main()
{
    ABC obj1;

    obj1.x = 1;
    obj1.y = 2;

    ABC::printABC();
    obj1.printABC();

    ABC obj2;

    obj2.x = 4;
    obj2.y = 5;

    ABC::printABC();
    obj2.printABC();

    // So as we are using static data memebers and members function so the value of obj1 is also change:-

    ABC::printABC(); // 4 5
    obj1.printABC(); // 4 5

    return 0;
}