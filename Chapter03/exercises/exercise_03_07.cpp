#include <iostream>

const double HKM_TO_MILES = 62.14;
const double GALLON_TO_LITRES = 3.875;

int main()
{
    using namespace std;

    cout << "EURO style litres / 100km: ";
    double litresPer100Kms;
    cin >> litresPer100Kms;
    double milesPerGallon = HKM_TO_MILES / (litresPer100Kms / GALLON_TO_LITRES);

    cout << "US style miles per gallon " << milesPerGallon;
}