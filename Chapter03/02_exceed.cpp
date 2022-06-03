#include <iostream>
#include <climits>
using namespace std;

#define ZERO 0

int main()
{
    short sam = SHRT_MAX;
    unsigned short sue = sam;

    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited" << endl;
    sam++;
    sue++;
    cout << "Now Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited" << endl;
    cout << "Poor Sam!" << endl;

    sam = ZERO;
    sue = ZERO;

    cout << "Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited" << endl;
    sam--;
    sue--;
    cout << "Now Sam has " << sam << " dollars and Sue has " << sue << " dollars deposited" << endl;
    cout << "Lucky Sue!" << endl;
}
