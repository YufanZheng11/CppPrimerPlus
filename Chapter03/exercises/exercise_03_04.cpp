#include <iostream>

int main()
{
    using namespace std;
    long seconds;
    cout << "Enter the number of seconds: ";
    cin >> seconds;

    const int hoursPerDay = 24;
    const int minutesPerHour = 60;
    const int secondsPerMinute = 60;

    const long original = seconds;

    long days, hours, minutes;
    days = seconds / hoursPerDay / minutesPerHour / secondsPerMinute;
    seconds -= days * hoursPerDay * minutesPerHour * secondsPerMinute;
    hours = seconds / minutesPerHour / secondsPerMinute;
    seconds -= hours * minutesPerHour * secondsPerMinute;
    minutes = seconds / secondsPerMinute;
    seconds -= minutes * secondsPerMinute;

    cout << original << " seconds = ";
    cout << days << " days, ";
    cout << hours << " hours, ";
    cout << minutes << " minutes, ";
    cout << seconds << " seconds." << endl;
}