#include <iostream>

const int AR_SIZE = 20;

int main()
{
    using namespace std;
    char name[AR_SIZE];
    char dessert[AR_SIZE];

    cout << "Enter your name:\n";
    cin >> name;
    cout << "Enter your favorite dessert:\n";
    cin >> dessert;
    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << endl;
}