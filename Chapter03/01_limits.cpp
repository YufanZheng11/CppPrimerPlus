#include <iostream>
#include <climits>

int main()
{
    using namespace std;
    int nInt = INT_MAX;
    short nShort = SHRT_MAX;
    long nLong = LONG_MAX;
    long long nLLong = LLONG_MAX;

    cout << "int is " << sizeof (int) << " bytes." << endl;
    cout << "short is " << sizeof (short) << " bytes." << endl;
    cout << "long is " << sizeof (long) << " bytes." << endl;
    cout << "long long is " << sizeof (long long) << " bytes." << endl;
    cout << endl;

    cout << "Maximum values:" << endl;
    cout << "int: " << nInt << endl;
    cout << "short: " << nShort << endl;
    cout << "long: " << nLong << endl;
    cout << "long long: " << nLLong << endl;
}