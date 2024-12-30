#include <bits/stdc++.h>

using namespace std;

//! MultiLevel Inheritance:-

// Multilevel Inheritance is a type of Inheritance in which one base class is derived by a child class & then this child class is further derived by another child class & so on. This type of Inheritance is called Multilevel Inheritance.

class A
{
protected:
    int roll;

public:
    void getRoll()
    {
        cout << "Enter Roll Number: ";
        cin >> roll;
    }

    void putRoll()
    {
        cout << "Roll Number: " << roll << endl;
    }
};

class B : public A
{
protected:
    int sub1, sub2;

public:
    void getMarks()
    {
        cout << "Enter Marks of Subject 1: ";
        cin >> sub1;

        cout << "Enter Marks of Subject 2: ";
        cin >> sub2;
    }

    void putMarks()
    {
        cout << "Marks of Subject 1: " << sub1 << endl;
        cout << "Marks of Subject 2: " << sub2 << endl;
    }
};

class C : public B
{
private:
    int sptm;

public:
    void getSptm()
    {
        cout << "Enter Sports Marks: ";
        cin >> sptm;
    }
    void total()
    {
        putRoll();
        putMarks();

        cout << "Total Marks: " << sub1 + sub2 + sptm << endl;
    }
};

int main()
{
    C obj;
    obj.getRoll();
    obj.getMarks();
    obj.getSptm();

    obj.total();

    return 0;
}