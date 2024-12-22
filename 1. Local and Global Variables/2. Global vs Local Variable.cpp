#include <bits/stdc++.h>

using namespace std;

int x = 2;

int main()
{
    ::x = 4; // Modified and reference to Global variables

    int x = 20;

    cout << x << endl; // Printing Local Variables

    cout << ::x << endl; // Printing Global Variables
    return 0;
}