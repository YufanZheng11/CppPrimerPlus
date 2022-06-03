#include <iostream>
using namespace std;

double ConvertToFahrenheit(double);

int main()
{
    cout << "Please enter a Celsius value: ";
    double celsius;
    cin >> celsius;
    cout << celsius << " degrees Celsius is " << ConvertToFahrenheit(celsius) << " degrees Fahrenheit. " << endl;
}

double ConvertToFahrenheit(double celsius)
{
    double fahrenheit = 1.8 * celsius + 32.0;
    return fahrenheit;
}