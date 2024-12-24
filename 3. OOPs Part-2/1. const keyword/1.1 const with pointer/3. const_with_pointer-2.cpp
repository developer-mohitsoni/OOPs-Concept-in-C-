#include <bits/stdc++.h>

using namespace std;

//* const keyword with pointer

int main()
{
    // const with pointer

    //! case:-1 Pointer is constant & data is NON-CONSTANT

    int *const a = new int(5);

    cout << *a << endl; // 5

    *a = 10; // changing the data of pointer

    int b = 15;

    // a = &b; // Pointer itself cannot be re-assigned

    cout << b << endl; //

    cout << *a << endl; // 10

    return 0;
}