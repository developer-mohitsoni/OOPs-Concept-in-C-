#include <bits/stdc++.h>

using namespace std;

//! Exception Handling:-

int main()
{
    int a, b, c;

    cout << "Enter two numbers: " << endl;
    cin >> a >> b;

    try
    {
        if (b != 0)
        {
            c = a / b;

            cout << "Division Result: " << c << endl;
        }
        else
        {
            throw "Division by Zero Error!";
        }
    }
    catch (const char *error)
    {
        cerr << "Error: " << error << endl;
    }
    return 0;
}