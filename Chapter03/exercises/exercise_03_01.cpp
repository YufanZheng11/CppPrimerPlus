#include <iostream>

int main()
{
    using namespace std;
    int height;
    cout <<"Enter your height in inches: ";
    cin >> height;
    const int inchesPerFeet = 12;
    int feet = height / inchesPerFeet;
    int inches = height % inchesPerFeet;
    cout << "Your height is " << feet << " feet, " << inches << " inches." << endl;
}