#include <bits/stdc++.h>

using namespace std;

//* Program to accessing private data members in any function using friend function

class A
{
private:
    int x;

public:
    A(int _val) : x(_val) {};

    // friend function printX of class A
    friend void printX(const A &a);
};

void printX(const A &a)
{
    // We can use private data memeber of Class A
    cout << a.x << endl;
}

int main()
{
    A a(5);

    printX(a);

    return 0;
}