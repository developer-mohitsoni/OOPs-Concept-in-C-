#include <bits/stdc++.h>

using namespace std;

class MaxMin
{
private:
    int a, b; // private member variables

public:
    // Public member function
    void getNumbers();

    void findMaxMin();
};

void MaxMin::getNumbers()
{
    cout << "Enter two numbers: ";
    cin >> a >> b;
}

void MaxMin::findMaxMin()
{
    if (a > b)
    {
        cout << "Max: " << a << endl;
    }
    else
    {
        cout << "Min: " << b << endl;
    }
}

int main()
{
    MaxMin obj;
    obj.getNumbers();
    obj.findMaxMin();

    return 0;
}