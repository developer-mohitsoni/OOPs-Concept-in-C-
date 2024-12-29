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

class Demo
{
private:
    int a, b;

public:
    void getData();

    friend int Sum(Demo);
};

void Demo::getData()
{
    cout << "Enter two numbers: ";
    cin >> a >> b;
}
int Sum(Demo aa)
{
    return aa.a + aa.b;
}

int main()
{
    Demo obj;
    obj.getData();

    cout << "Sum of two numbers is: " << Sum(obj) << endl;

    return 0;
}