#include <bits/stdc++.h>

using namespace std;

//* Program to understand how to access private data members using Getter and Setter

class A
{
private:
    int x;

public:
    A(int _val) : x(_val) {};

    // Getter Method
    int getX() const { return x; }

    // Setter Method
    void setX(int val) { x = val; }
};

class B
{
public:
    void print(const A &a)
    {
        cout << a.getX() << endl;
    }
};

int main()
{
    A a(5);

    B b;

    b.print(a);

    return 0;
}