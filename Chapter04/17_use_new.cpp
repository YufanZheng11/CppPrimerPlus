#include <iostream>

int main()
{
    using namespace std;
    int nights = 1001;
    auto* pt = new int;
    *pt = 1001;

    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;

    auto* pd = new double;
    *pd = 100001.0;
    cout << "double ";
    cout << "value = " << *pd << ": location = " << pd << endl;
    cout << "Location of pointer pd: " << &pd << endl;

    cout << "Size of pt: " << sizeof pt << ", size of *pt: " << sizeof *pt << endl;
    cout << "Size of pd: " << sizeof pd << ", size of *pd: " << sizeof *pd << endl;
}