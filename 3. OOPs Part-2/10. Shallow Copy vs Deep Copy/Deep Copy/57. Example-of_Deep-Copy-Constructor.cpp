#include <bits/stdc++.h>

using namespace std;

//* Program to understand Example of Deep Copy Constructor.

class ABC
{
public:
    int x;
    int *y;

    ABC(int x, int y) : x(x), y(new int(y)) {}

    //! Our Smart Copy Constructor: It is Deep Copy

    ABC(const ABC &obj)
    {
        x = obj.x;
        y = new int(*obj.y);

        cout << "Copy Constructor Called" << endl;
    }

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
    ABC obj1(10, 20);
    cout << "Printing obj1\n";
    obj1.print();

    ABC obj2(obj1); // Call Deep Constructor

    cout << "Printing obj2\n";
    obj2.print();

    // Update the value of y in obj2
    *obj2.y = 30;

    cout << "Printing obj1 after modifying obj2\n";
    obj1.print();

    cout << "Printing obj2 after modifying obj1\n";
    obj2.print();

    return 0;
}