#include <bits/stdc++.h>

using namespace std;

//* const keyword

int main()
{
    // x is constant
    const int x = 10;

    // Initialization can be done but we can't reassign a value or change a value.

    // x = 11; // error: assignment of read-only variable 'x' is not allowed

    cout << x << endl;

    return 0;
}