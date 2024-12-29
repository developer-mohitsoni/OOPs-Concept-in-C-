#include <bits/stdc++.h>

using namespace std;

//! Friend Function:-

// We know that the private section of class is accessible only & only through the public section of the same class.

// What if we want to give access to private member, a function inside the class, In such circumstances we use the concept of Friend Function.

//! Key Point:-

// 1)- A friend function can't be called using the object of the class. It is called like a normal function.

// 2)- A friend function can access the private members of the class.

// 3)- Friend function can use the resources of a class only using an object of the same class.

// 4)- Usually a friend function has object as an argument.

class B;
class A
{
private:
    int a;

public:
    void getData()
    {
        cout << "Enter the value of a: ";
        cin >> a;
    }

    friend void max(A, B);
};

class B
{
private:
    int b;

public:
    void getData()
    {
        cout << "Enter the value of b: ";
        cin >> b;
    }
    friend void max(A, B);
};

void max(A obj1, B obj2)
{
    if (obj1.a > obj2.b)
    {
        cout << "a is greater than b" << endl;
    }
    else
    {
        cout << "b is greater than a" << endl;
    }
}

int main()
{
    A objA;
    B objB;

    objA.getData();

    objB.getData();

    max(objA, objB);

    return 0;
}