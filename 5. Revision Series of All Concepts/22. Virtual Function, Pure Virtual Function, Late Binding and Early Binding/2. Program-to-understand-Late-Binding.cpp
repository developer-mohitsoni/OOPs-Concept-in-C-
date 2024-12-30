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
    A *ptr;

    A obj; // Base Class Object

    ptr = &obj;

    ptr->show(); // Early Binding

    //! This will show even the same result even if i create the object of Class B. That's why we need to use virtual keyword in base class. In NEXT Program.

    B obj2; // Derived Class Object

    ptr = &obj2;

    ptr->show(); // Early Binding

    return 0;
}