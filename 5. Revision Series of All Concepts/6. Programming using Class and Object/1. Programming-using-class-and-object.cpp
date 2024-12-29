#include <bits/stdc++.h>

using namespace std;

class Addition
{
private:
    int a, b; // private member variables

public:
    // public member function

    // Getter functions
    void getA()
    {
        cout << "Enter the value of a: ";
        cin >> a;

        // Check if the entered value is negative
        if (a < 0)
        {
            throw invalid_argument("The entered value for a cannot be negative.");
        }
    }

    void getB()
    {
        cout << "Enter the value of b: ";
        cin >> b;

        // Check if the entered value is negative
        if (b < 0)
        {
            throw invalid_argument("The entered value for b cannot be negative.");
        }
    }

    // Public member function
    int add()
    {
        return a + b;
    }
};

int main()
{
    Addition obj;

    obj.getA();

    obj.getB();

    cout << "The sum of a and b is: " << obj.add() << endl;

    return 0;
}