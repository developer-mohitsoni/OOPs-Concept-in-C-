#include <bits/stdc++.h>

using namespace std;

//* const keyword with pointer

int main()
{
    // const with pointer

    //! case:-1 Pointer is NON-CONSTANT & data is constant

    const int *a = new int(2);

    cout << *a << endl; // 2

    // *a = 5; // cannot change the data of pointer

    int b = 5;
    a = &b; // Pointer itself can be reassigned

    cout << *a << endl; // 5

    return 0;
}