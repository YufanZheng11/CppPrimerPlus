#include <iostream>

int main()
{
    using namespace std;

    double worldPopulation, usPopulation;
    cout << "Enter the world's population: ";
    cin >> worldPopulation;
    cout << "Enter the population of the US: ";
    cin >> usPopulation;

    double percentage = usPopulation / worldPopulation * 100.0;
    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << "The population of the US is " << percentage << "% of the world population." << endl;
}