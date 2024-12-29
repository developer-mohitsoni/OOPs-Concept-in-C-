#include <bits/stdc++.h>

using namespace std;

class XYZ
{
private:
    int a, b;

public:
    // Member functions
    void getData();

    void showData();
};

void XYZ::getData()
{
    cout << "Enter two numbers: " << endl;
    cin >> a >> b;
}
void XYZ::showData()
{
    cout << "a = " << a << "\tb = " << b << endl;
}

int main()
{
    XYZ obj[5];
    for (int i = 0; i < 5; i++)
    {
        obj[i].getData();
        obj[i].showData();
    }

    return 0;
}