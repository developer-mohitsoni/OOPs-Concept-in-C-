#include <bits/stdc++.h>

using namespace std;

int x = 2;

void func()
{
    int x = 60;
    cout << x << endl;   // Printing Local Variables
    cout << ::x << endl; // Printing Global Variables which modified
}

int main()
{
    ::x = 4; // Modified and reference to Global variables

    int x = 20;

    cout << x << endl; // Printing Local Variables

    cout << ::x << endl; // Printing Global Variables

    {
        int x = 5;

        {
            int x = 44;
            cout << x << endl; // Printing Local Variables
        }

        cout << x << endl; // Printing Local Variables

        cout << ::x << endl; // Printing Global Variables
    }

    func();
    return 0;
}