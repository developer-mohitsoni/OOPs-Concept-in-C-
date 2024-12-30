#include <bits/stdc++.h>

using namespace std;

//! Ambiguity Resolution

class A
{
protected:
    int a;

public:
    void input()
    {
        cout << "Enter the value of a: " << endl;
        cin >> a;
    }

    void output()
    {
        cout << "Base Class: " << a << endl;
    }
};

class B
{
protected:
    int b;

public:
    void input()
    {
        cout << "Enter the value of b: " << endl;
        cin >> b;
    }
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
    void getData()
    {
        //! Resolve Ambiguity using Scope Resolution Operator
        A::input();
        B::input();
        cout << "Enter the value of c: " << endl;
        cin >> c;
    }

    void show()
    {
        cout << "Derived Class: " << c << endl;
    }
};

int main()
{
    C obj;

    obj.getData();
    obj.output();
    obj.putData();
    obj.show();

    return 0;
}