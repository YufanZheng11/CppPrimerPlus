#include <iostream>

double CalculateBMI(int, int, int);

int main()
{
    using namespace std;
    int feet, inches, pounds;
    cout << "Please enter your height feet: ";
    cin >> feet;
    cout << "Please enter your height inches: ";
    cin >> inches;
    cout << "Please enter your weight pounds: ";
    cin >> pounds;

    cout << "BMI is: " << CalculateBMI(feet, inches, pounds) << endl;
}

double CalculateBMI(int feet, int inches, int pounds)
{
    const int inchesPerFeet = 12;
    const double meterPerFeet = 0.0254;
    const double kiloPerPound = 2.2;
    double height = meterPerFeet * (feet * inchesPerFeet + inches);
    double weight = pounds / kiloPerPound;
    double bmi = weight / (height * height);
    return bmi;
}