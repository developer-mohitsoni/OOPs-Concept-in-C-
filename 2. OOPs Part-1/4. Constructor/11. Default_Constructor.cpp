#include <bits/stdc++.h>

using namespace std;

//* Default Constructor in Class

//! NOTES:-

// 1. The name of the constructor is same as it's class name.

// 2. Constructor are mostly declared in public section of the class though it can be declared in the private section of the class.

// 3. Default constructor is automatically called when an object is created.

// 4. If no constructor is declared, then the compiler automatically generates a default constructor.

// 5. Constructor do not return values; hence they do not have return type.

// 6. Constructor can be overloaded

// 7. Constructor can not be declared virtual.

class Constructor
{
public:
    int a, b;

    // Default Constructor
    Constructor()
    {
        a = 10;
        b = 20;
    }
};

int main()
{
    // Default Constructor called automatically when the object is instantiated or created.

    Constructor obj;

    cout << "Value of a: " << obj.a << endl;
    cout << "Value of b: " << obj.b << endl;
    return 0;
}