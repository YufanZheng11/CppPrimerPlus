#include <iostream>
using namespace std;

double ConvertToAstronomicalUnit(double);

int main()
{
    cout << "Enter the number of light years: ";
    double lightYears;
    cin >> lightYears;
    cout << lightYears << " light years = " << ConvertToAstronomicalUnit(lightYears) << " astronomical units. " << endl;
}

double ConvertToAstronomicalUnit(double lightYears)
{
    double astronomicalUnit = 63240 * lightYears;
    return astronomicalUnit;
}