#include <iostream>

struct inflatable
{
    char name[20];
    float volume;
    double price;
};

int main()
{
    using namespace std;
    inflatable bonquet = {
            "sunflowers",
            0.20,
            12.49
    };
    inflatable choice {};
    cout << "bonquet: " << bonquet.name << " for $" << bonquet.price << endl;

    choice = bonquet;
    cout << "choice: " << choice.name << " for $" << choice.price << endl;
}