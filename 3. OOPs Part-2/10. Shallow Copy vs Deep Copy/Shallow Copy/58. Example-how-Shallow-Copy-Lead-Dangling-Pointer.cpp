#include <bits/stdc++.h>

using namespace std;

//* Program Example to show How Shallow Copy lead to Dangling Pointer

class MyClass
{
public:
    int *myPointer;

    MyClass() : myPointer(new int()) {};

    ~MyClass()
    {
        delete myPointer;
    }
};

int main()
{
    MyClass original;

    MyClass ShallowCopy = original; // Shallow copy

    // Delete the original object

    delete &original;

    // Try to access the dynamically allocated object through ShallowCopy

    int value = *ShallowCopy.myPointer; // This will cause a crash a program

    return 0;
}