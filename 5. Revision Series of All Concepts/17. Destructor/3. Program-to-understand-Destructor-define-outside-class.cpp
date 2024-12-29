#include <bits/stdc++.h>

using namespace std;

int count = 0;
class Demo
{
public:
    // Default Constructor
    Demo();

    // Destructor
    ~Demo();
};

Demo::Demo()
{
    ::count++;
    cout << "Object created. Total objects created: " << ::count << endl;
}

Demo::~Demo()
{
    ::count--;
    cout << "Object destroyed. Total objects destroyed: " << ::count << endl;
}

int main()
{
    Demo d1, d2, d3;
    {
        Demo d4;
    }
    return 0;
}