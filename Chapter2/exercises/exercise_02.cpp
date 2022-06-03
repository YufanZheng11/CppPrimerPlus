//
// Created by Yufan Zheng on 3/6/2022.
//

#include <iostream>

double ConvertToYards(double);

int main()
{
    using namespace std;
    cout << "Enter furlongs: ";
    double furlongs;
    cin >> furlongs;
    cout << furlongs << " furlongs = " << ConvertToYards(furlongs) << " yards" << endl;
}

double ConvertToYards(double furlongs)
{
    double yards = furlongs * 220.0;
    return yards;
}