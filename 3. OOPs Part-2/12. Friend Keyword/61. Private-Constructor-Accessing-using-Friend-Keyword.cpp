#include <bits/stdc++.h>

using namespace std;

//* Program to understand how to access private constructor using Friend Keyword

class Box
{
private:
    int width;

    // Initialization list constructor
    Box(int w) : width(w) {} // Private constructor

public:
    int getWidth() const { return width; }

    void setWidth(int val)
    {
        width = val;
    }

    friend class BoxFactory;
};

class BoxFactory
{
private:
    int count;

public:
    Box getABox(int w)
    {
        count++;

        cout << "How many time used Box model in this program: " << count << endl;

        return Box(w); // Creating Box object using private constructor
    }
};

int main()
{
    BoxFactory bFact;

    Box b = bFact.getABox(5);

    cout << "Width of box: " << b.getWidth() << endl;

    Box c = bFact.getABox(10);

    cout << "Width of box: " << c.getWidth() << endl;

    return 0;
}