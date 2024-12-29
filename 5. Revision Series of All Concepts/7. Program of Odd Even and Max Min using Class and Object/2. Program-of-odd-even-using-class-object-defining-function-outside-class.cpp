#include <bits/stdc++.h>

using namespace std;

class OddEven
{
private:
    int a; // private member variables

public:
    // Public member function
    void getNumber();

    void checkOddEven();
};

void OddEven::getNumber()
{
    cout << "Enter a number: ";
    cin >> a;
}

void OddEven::checkOddEven()
{
    if (a % 2 == 0)
    {
        cout << a << " is even." << endl;
    }
    else
    {
        cout << a << " is odd." << endl;
    }
}

int main()
{
    OddEven obj;        // Object of class OddEven
    obj.getNumber();    // Get number from user
    obj.checkOddEven(); // Check whether number is odd or even

    return 0;
}