#include <iostream>

int main()
{
    using namespace std;
    auto* p3 = new double[3];

    p3[0] = 0.2;
    p3[1] = 0.5;
    p3[2] = 0.8;

    cout << "p3[1] = " << p3[1] << endl;
    p3 = p3 + 1;
    cout << "Now p3[0] = " << p3[0] << endl;
    cout << "and p3[1] = " << p3[1] << endl;
    p3 = p3 - 1;

    delete [] p3;
}