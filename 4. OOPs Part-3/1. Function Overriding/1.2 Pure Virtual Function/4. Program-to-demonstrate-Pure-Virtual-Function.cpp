#include <bits/stdc++.h>

using namespace std;

//! Program to demonstrate Pure Virtual Function.

class Bird // Interface
{
public:
    // Pure Virtual Function

    virtual void eat() = 0;
    virtual void fly() = 0;

    // classes that inherit this class has to implement pure virtual function

    // Pure Virtual Destructor (Recommended)
    virtual ~Bird() {}
};

class Sparrow : public Bird // Implement
{
public:
    void eat() override
    {
        cout << "Sparrow is eating" << endl;
    }
    void fly() override
    {
        cout << "Sparrow is flying" << endl;
    }

    ~Sparrow() {}
};

void birdDoesSomething(Bird *&bird)
{
    bird->eat();
    bird->fly();
}

int main()
{
    Bird *bird = new Sparrow(); // Ye dena jaroori hai ki kon si bird hum use kar rahe hai.

    birdDoesSomething(bird); // Bird pointer ko hum use kar rahe hai.

    delete bird; // Memory leak aayega.

    return 0;
}