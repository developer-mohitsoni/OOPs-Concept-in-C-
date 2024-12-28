#include <bits/stdc++.h>

using namespace std;

//* Program to understand simple example of Copy Constructor.

class ABC
{
public:
    int x;
    int *y;

    ABC(int x, int y) : x(x), y(new int(y)) {}

    void print() const
    {
        printf("PTR X : %p\nX: %d\nPTR Y: %p\n Content of Y: %d\n\n", &x, x, y, *y);
    }

    ~ABC()
    {
        delete y;
    }
};

int main()
{
    ABC obj(10, 20);
    obj.print();

    return 0;
}