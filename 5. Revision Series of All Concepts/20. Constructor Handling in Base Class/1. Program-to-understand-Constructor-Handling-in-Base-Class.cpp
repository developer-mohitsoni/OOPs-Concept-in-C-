#include <bits/stdc++.h>

using namespace std;

//! Constructor Handling in Base Class

class A
{
protected:
    int a;

public:
    A(int a) : a(a) {};

    void display()
    {
        cout << "Base Class: " << a << endl;
    }
};

class B
{
protected:
    int b;

public:
    B(int b) : b(b) {};
    void putData()
    {
        cout << "Derived Class: " << b << endl;
    }
};

class C : public A, public B
{
private:
    int c;

public:
    C(int p, int q, int r) : A(p), B(q)
    {
        c = r;
    }

    void show()
    {
        cout << "Derived Class: " << c << endl;
    }
};

int main()
{
    C obj(10, 20, 30);
    obj.display(); // Base Class: 10
    obj.putData(); // Derived Class: 20
    obj.show();    // Derived Class: 30

    return 0;
}