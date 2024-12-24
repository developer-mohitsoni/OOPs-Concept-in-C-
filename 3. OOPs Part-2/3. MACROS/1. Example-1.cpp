#include <bits/stdc++.h>

using namespace std;

#define PI 3.14
#define MAXX(x, y) (x > y ? x : y)

float circleArea(float r)
{
    return PI * r * r;
}

float circleParameter(float r)
{
    return 2 * PI * r;
}

int getMaxForA()
{
    int a = 10;
    int b = 20;

    int c = MAXX(a, b);

    return c;
}

int getMaxForB()
{
    int a = 1000;
    int b = 100;

    int c = MAXX(a, b);

    return c;
}

int main()
{
    cout << "Circle area: " << circleArea(5) << endl;

    cout << "Circle parameter: " << circleParameter(5) << endl;

    cout << "Max for A: " << getMaxForA() << endl;

    cout << "Max for B: " << getMaxForB() << endl;
}
