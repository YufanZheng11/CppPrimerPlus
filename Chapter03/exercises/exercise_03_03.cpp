#include <iostream>

int main()
{
    using namespace std;
    int degrees, minutes, seconds;
    cout << "Enter a latitude in degrees, minutes, and seconds: " << endl;
    cout << "First, enter the degrees: ";
    cin >> degrees;
    cout << "Next, enter the minutes of arc: ";
    cin >> minutes;
    cout << "Finally, enter the seconds of arc: ";
    cin >> seconds;

    const float minutesPerDegree = 60.0;
    const float secondsPerMinute = 60.0;
    double result = static_cast<double>(degrees) +
            static_cast<double>(minutes) / minutesPerDegree +
            static_cast<double>(seconds) / minutesPerDegree / secondsPerMinute;

    cout.setf(ios_base::fixed, ios_base::floatfield);
    cout << degrees << " degrees, " << minutes << " minutes, " << seconds << " seconds = ";
    cout << result << " degrees." << endl;
}