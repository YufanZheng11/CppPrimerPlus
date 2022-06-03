#include <iostream>

int main()
{
    using namespace std;
    const int lbsPerStn = 14;
    int lbs;

    cout << "Enter your weight in pounds: ";
    cin >> lbs;
    int stone = lbs / lbsPerStn;
    int pounds = lbs % lbsPerStn;
    cout << lbs << " pounds are " << stone << " stone, " << pounds << " pound(s)." << endl;
}