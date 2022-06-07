#include <iostream>

int main()
{
    using namespace std;
    int nights = 1001;
    int* pt = new int;
    *pt = 1001;

    cout << "nights value = ";
    cout << nights << ": location " << &nights << endl;
    cout << "int ";
    cout << "value = " << *pt << ": location = " << pt << endl;
}