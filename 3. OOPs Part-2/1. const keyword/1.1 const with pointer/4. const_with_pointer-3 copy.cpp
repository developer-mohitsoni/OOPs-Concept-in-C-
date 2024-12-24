#include <bits/stdc++.h>

using namespace std;

//* const keyword with pointer

int main()
{
    // const with pointer

    //! case:-1 Pointer is constant & data is also constant

    const int *const a = new int(5);

    cout << *a << endl; // 5

    // *a = 10; // cannot change the data of pointer

    int b = 15;

    // a = &b; // Pointer itself cannot be re-assigned

    cout << b << endl; // 15

    return 0;
}