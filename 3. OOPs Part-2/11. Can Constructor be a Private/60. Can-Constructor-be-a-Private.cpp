#include <bits/stdc++.h>

using namespace std;

//* Program to understand can constructor be a private:-

// Yes, a Constructor can be made private implicitly in C++.

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
};

int main()
{
    // Box box(5); //! Error: Private constructor cannot be called directly
    return 0;
}