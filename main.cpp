#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

// Function to roll a 20-sided die
int rollD20()
{
    return rand() % 20 + 1;
}

// Function to roll a 4-sided die
int rollD4()
{
    return rand() % 4 + 1;
}

int main()
{
    // Seed the random number generator
    srand(time(0));

    int d20;
    int d4;
    int count = 0;

    // Keep rolling until both dice show 1
    do
    {
        d20 = rollD20();
        d4 = rollD4();
        count++;

    } while (d20 != 1 || d4 != 1);

    // Print the number of rolls
    cout << "Snake eyes!" << endl;
    cout << "It took " << count << " rolls." << endl;

    return 0;
}