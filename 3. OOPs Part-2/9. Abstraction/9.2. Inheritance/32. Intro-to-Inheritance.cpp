#include <bits/stdc++.h>

using namespace std;

// Base Class

class Bird
{
public:
    int age, weight;
    int nol;
    string color;

    void eat()
    {
        cout << "Bird eats" << endl;
    }
    void fly()
    {
        cout << "Bird flies" << endl;
    }
};

// Derived Class

class Sparrow : public Bird
{
public:
    Sparrow(int age, int weight, string color, int nol)
    {
        this->age = age;
        this->weight = weight;
        this->color = color;
        this->nol = nol;
    }

    void grassing()
    {
        cout << "Sparrow is grassing" << endl;
    }
};

// Derived Class

class Pigeon : public Bird
{
public:
    void gluttering()
    {
        cout << "Pigeon is gluttering" << endl;
    }
};

// Extendability of Derived Class

class Parot : public Bird
{
public:
    void speaking()
    {
        cout << "Parot is speaking" << endl;
    }
};

int main()
{
    Sparrow s(2, 5, "blue", 2);

    cout << s.color << endl;

    s.eat();

    s.grassing();

    cout << "----------------------------------------------" << endl;

    Pigeon p;

    p.eat();

    p.gluttering();

    return 0;
}