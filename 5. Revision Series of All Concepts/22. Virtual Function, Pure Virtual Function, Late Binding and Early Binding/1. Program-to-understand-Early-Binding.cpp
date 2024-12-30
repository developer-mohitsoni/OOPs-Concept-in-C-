#include <bits/stdc++.h>

using namespace std;

class A
{
public:
    void show()
    {
        cout << "Base Class: " << endl;
    }
};

class B : public A
{
public:
    void show()
    {
        cout << "Derived Class: " << endl;
    }
};

int main()
{
    B obj;

    //! Early Binding
    obj.show();

    obj.A::show();

    return 0;
}