#include <iostream>
using namespace std;

float trapezoid_area(float a, float b, float h)
{
    return (a + b) * h / 2;
}

int main()
{
    cout << "Area: " << trapezoid_area(5, 10, 4) << endl;
    return 0;
}