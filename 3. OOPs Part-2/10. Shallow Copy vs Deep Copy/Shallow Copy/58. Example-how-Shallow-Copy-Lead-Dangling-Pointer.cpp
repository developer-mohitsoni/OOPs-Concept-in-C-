#include <bits/stdc++.h>

using namespace std;

//* Program Example to show How Shallow Copy lead to Dangling Pointer

class MyClass
{
public:
    int *myPointer;

    MyClass() : myPointer(new int(20)) {};

    ~MyClass()
    {
        delete myPointer;
    }
};

int main()
{
    MyClass original;            // Create original object
    MyClass DeepCopy = original; // Create a deep copy

    // Modify the value in the original
    *original.myPointer = 100;

    // Check that DeepCopy is independent
    cout << "Original Value: " << *original.myPointer << endl;  // Should print 100
    cout << "Deep Copy Value: " << *DeepCopy.myPointer << endl; // Should print 100

    return 0;
}