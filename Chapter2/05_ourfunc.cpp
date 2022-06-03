//
// Created by Yufan Zheng on 3/6/2022.
//

#include <iostream>

void Simon(int);

int main()
{
    using namespace std;
    Simon(3);
    cout << "Pick an integer: ";
    int count;
    cin >> count;
    Simon(count);
    cout << "Done!" << endl;
    return 0;
}

void Simon(int n)
{
    using namespace std;
    cout << "Simon says touch your tones " << n << " times." << endl;
}
