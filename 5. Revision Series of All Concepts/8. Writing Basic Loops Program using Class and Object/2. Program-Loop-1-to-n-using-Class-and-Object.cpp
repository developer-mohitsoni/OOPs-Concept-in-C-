#include <bits/stdc++.h>

using namespace std;

class OnetoN
{
private:
    int n;

public:
    // Member functions
    void getN();

    void showData();
};

void OnetoN::getN()
{
    cout << "Enter the value of n:" << endl;
    cin >> n;
}
void OnetoN::showData()
{
    int i;
    for (i = 1; i <= n; i++)
    {
        cout << i << " ";
    }
}

int main()
{
    OnetoN obj;
    obj.getN();
    obj.showData();
    return 0;
}