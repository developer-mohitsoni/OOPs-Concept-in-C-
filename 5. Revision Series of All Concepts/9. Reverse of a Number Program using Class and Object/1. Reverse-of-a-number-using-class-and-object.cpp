#include <bits/stdc++.h>

using namespace std;

class Reverse
{
private:
    int n;

public:
    // Member functions
    void getN();

    void showReverse();
};

void Reverse::getN()
{
    cout << "Enter the number to find reverse: " << endl;
    cin >> n;
}
void Reverse::showReverse()
{
    int rev = 0;

    int temp = n;

    while (temp != 0)
    {
        int lastDigit = temp % 10;
        rev = rev * 10 + lastDigit;
        temp = temp / 10;
    }
    cout << "The reverse of " << n << " is " << rev << endl;
}

int main()
{
    Reverse obj;
    obj.getN();
    obj.showReverse();
    return 0;
}