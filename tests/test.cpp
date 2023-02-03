#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int myArray[10];
    for (int i = 0; i < 10; i++) {
        myArray[i] = i;
    }

    // TODO: Initilize an array of integers called yarrAym. Fill this array with the same numbers in myArray, but backwards.
    int yarrAym[10];
    for (int i = 0; i < 10; i++) {
        yarrAym[i] = i;
    }
    // TODO: Output the contents of each array, along with the first, fifth and last values. Try to make this look nice.
    for (int i = 0; i < 10; i++) {
        cout << myArray[i] << " ";
    }
        cout << endl;

    for (int i = 0; i < 10; i++) {
        cout << yarrAym[i] << " ";
    }
        cout << endl;
}