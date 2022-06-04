#include <iostream>

const int AR_SIZE = 10;

int main()
{
    using namespace std;
    char name[AR_SIZE];
    char dessert[AR_SIZE];

    cout << "Enter your name: ";
    cin.getline(name, AR_SIZE);
    cout << "Enter your favorite dessert: ";
    cin.getline(dessert, AR_SIZE);

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << endl;
}