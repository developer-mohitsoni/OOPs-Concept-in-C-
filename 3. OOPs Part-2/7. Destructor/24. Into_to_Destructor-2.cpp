#include <bits/stdc++.h>

using namespace std;

//! Basic Intro to Destructor

class Test
{
public:
    // User-Defined Default Constructor

    Test()
    {
        cout << "Constructor Executed" << endl;
    }

    // User-Defined Default Destructor
    ~Test()
    {
        cout << "Destructor Executed" << endl;
    }
};

int main()
{
    Test obj1, obj2, obj3, obj4; // Objects of Test class is created

    return 0;
}