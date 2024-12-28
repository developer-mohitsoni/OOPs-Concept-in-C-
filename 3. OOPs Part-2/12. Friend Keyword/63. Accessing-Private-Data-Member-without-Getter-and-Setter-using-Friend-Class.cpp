#include <bits/stdc++.h>

using namespace std;

//* Program to understand how to access private data members without Getter and Setter using Friend Class

class A
{
private:
    int x;

public:
    A(int _val) : x(_val) {};

    friend class B;
};

class B
{
public:
    void print(const A &a)
    {
        cout << a.x << endl;
    }
};

int main()
{
    A a(5);

    B b;

    b.print(a);

    return 0;
}