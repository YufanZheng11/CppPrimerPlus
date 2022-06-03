#include <iostream>

int main()
{
    using namespace std;
    cout << "Please enter your name: ";
    string name;
    getline(cin, name);
    cout << "Please enter your address: ";
    string address;
    getline(cin, address);
    cout << "Your name is: " << name << ", your address is: " << address << endl;
    return 0;
}
