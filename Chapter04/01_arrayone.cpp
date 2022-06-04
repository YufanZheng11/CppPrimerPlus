#include <iostream>

int main()
{
    using namespace std;
    int yams[3];
    yams[0] = 7;
    yams[1] = 8;
    yams[2] = 6;

    int yamcosts[3] = {20, 30, 5};

    cout << "Total yams = ";
    cout << yams[0] + yams[1] + yams[2] << endl;
    cout << "The package with " << yams[1] << " yams costs ";
    cout << yamcosts[1] << " cents per yam. \n";

    int total = 0;
    for(int i = 0; i < 3; i++) {
        total += yams[i] * yamcosts[i];
    }
    cout << "The total yam expense is " << total << " cents.\n";

    cout << "\nSize of yams array = " << sizeof yams << " bytes";
    cout << "\nSize of one element = " << sizeof yams[0] << " bytes \n";
}