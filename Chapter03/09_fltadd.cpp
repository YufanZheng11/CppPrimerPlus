#include <iostream>

int main()
{
    using namespace std;
    float a = 2.34e+22f;
    float b = a + 1.0f;

    cout << "a = " << a << endl;
    cout << "b - a = " << b - a << endl;
    // a = 2.34e+22
    // b - a = 0 -- !!!!!!
    // The problem is that 2.34E+22 represents a number with 23 digits to the left of the decimal.
    // By adding 1, you are attempting to add 1 to the 23rd digit in that number.
    // But type float can represent only the first 6 or 7 digits in a number,
    // so trying to change the 23rd digit has no effect on the value.
}