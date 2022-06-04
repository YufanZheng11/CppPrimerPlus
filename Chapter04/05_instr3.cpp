#include <iostream>

const int AR_SIZE = 20;

int main()
{
    using namespace std;
    char name[AR_SIZE];
    char dessert[AR_SIZE];

    cout << "Enter your name: ";
    cin.get(name, AR_SIZE).get();
    cout << "Enter your favorite dessert: ";
    cin.get(dessert, AR_SIZE).get();

    cout << "I have some delicious " << dessert;
    cout << " for you, " << name << endl;
}