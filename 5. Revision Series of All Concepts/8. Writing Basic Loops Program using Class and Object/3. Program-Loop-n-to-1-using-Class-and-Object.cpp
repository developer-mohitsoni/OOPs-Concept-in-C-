#include <bits/stdc++.h>

using namespace std;

class Nto1
{
private:
    int n;

public:
    // Member functions
    void getN();

    void showData();
};

void Nto1::getN()
{
    cout << "Enter the value of n:" << endl;
    cin >> n;
}
void Nto1::showData()
{
    int i;
    for (i = n; i >= 1; i--)
    {
        cout << i << " ";
    }
}

int main()
{
    Nto1 obj;
    obj.getN();
    obj.showData();
    return 0;
}