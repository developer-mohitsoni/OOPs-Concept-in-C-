#include <bits/stdc++.h>

using namespace std;

//! Single Level Inheritance:-

// When one base class is being derived by a single subclass, then this is called as Single Level Inheritance.

// It means when there is one base class & it is being derived by another single derived class. Then it is called as Single Level Inheritance.

class A
{
private:
    int x;

public:
    void input()
    {
        cout << "Enter the value of x: ";
        cin >> x;
    }

    int getX()
    {
        return x;
    }
};

class B : public A
{
private:
    int y;

public:
    void getData()
    {
        input();
        cout << "Enter the value of y: ";
        cin >> y;
    }
    void display()
    {
        cout << "Value of x: " << getX() << endl;
        cout << "Value of y: " << y << endl;
    }
};

int main()
{
    B obj;
    obj.getData();
    obj.display();

    return 0;
}