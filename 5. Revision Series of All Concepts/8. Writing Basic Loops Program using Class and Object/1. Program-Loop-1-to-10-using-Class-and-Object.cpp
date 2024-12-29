#include <bits/stdc++.h>

using namespace std;

class OnetoTen
{
public:
    void printNumbers()
    {
        for (int i = 1; i <= 10; i++)
        {
            cout << i << " ";
        }
        cout << endl;
    }
};

int main()
{
    OnetoTen obj;
    obj.printNumbers(); // Output: 1 2 3 4 5 6 7 8 9 10

    return 0;
}