#include <bits/stdc++.h>

using namespace std;

int x = 2;

int main()
{
    int x = 20;

    cout << x << endl; // Printing Local Variables

    cout << ::x << endl; // Printing Global Variables
    return 0;
}