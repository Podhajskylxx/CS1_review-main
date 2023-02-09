#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    for (int i = 0; i < 5; i++) // Create a for loop that will cycle through 5 times
    {
        int k = 4;                   // Create a variable that will print out the numbers
        for (int j = 4; j >= 0; j--) // Create a for loop that will cycle through 5 times
        {
            if ((i) < j) // If i is less than j, the it will print out *. This creates the upside down effect
            {
                cout << setw(2) << "*";
            }
            else
            {
                cout << setw(2) << (k);
                k++; // Increase k so that the numbers count up
            }
        }
        cout << endl;
    }
}