#include <bits/stdc++.h>

using namespace std;

//* const keyword in member function

class Abc
{
private:
    int x;
    int *y;

public:
    // Default Construct
    Abc()
    {
        x = 10;
        y = new int(20);
    }

    int getX() const { return x; } // Now you cannot change the value of x

    void setX(int _val)
    {
        // We want to change the value of x in setter function here:- that's why we are not using const keyword here
        x = _val;
    }

    int getY() const { return *y; }

    void setY(int *_val)
    {
        // We want to change the value of y in setter function here:- that's why we are not using const keyword here
        *y = *_val;
    }
};

int main()
{
    Abc obj;
    cout << obj.getX() << endl; // 10

    obj.setX(25);

    cout << obj.getX() << endl; // 25

    cout << obj.getY() << endl; // 20

    int *p = new int(30);

    // The above line is equivalent to:
    // int a = 30;
    // int *p = &a;

    obj.setY(p);

    cout << obj.getY() << endl; // 30

    return 0;
}