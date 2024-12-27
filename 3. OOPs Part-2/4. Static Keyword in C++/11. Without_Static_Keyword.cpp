#include <bits/stdc++.h>

using namespace std;

class ABC
{
public:
    int x, y;

    void printABC() const
    {
        cout << "x: " << this->x << " y: " << this->y << endl;

        //! BOTH are same

        cout << "x: " << x << " y: " << y << endl;
    }
};

int main()
{
    //* Iss code mai x and y ki different copy bnn rahi hai different object / instance ke liye.
    ABC obj = {1, 2};

    ABC obj2 = {4, 5};

    obj.printABC();

    cout << "---------------------------" << endl;

    obj2.printABC();

    cout << "---------------------------" << endl;

    return 0;
}