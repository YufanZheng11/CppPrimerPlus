#include <iostream>

int StoneToLB(int);

int main()
{
    using namespace std;
    int stone;
    cout << "Enter the weight in stone: ";
    cin >> stone;
    int pounds = StoneToLB(stone);
    cout << stone << " stone = " << pounds << " pounds." << endl;
    return 0;
}

int StoneToLB(int stone)
{
    int pounds = stone * 14;
    return pounds;
}
