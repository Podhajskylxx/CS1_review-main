// Computer Science 1 Review
// CS172 - Computer Science 2
// Whitworth University
// Last Modified: 2/1/2023
// Outlined by: Scott Griffith, Kent Jones, Pete Tucker, Qian Mao, and other CS faculty
// Completed by:
//
// Document designed to test student's comprehension of CS1 topics:
// Variables
// Data Types
// Numeric, Logical and Relational operators
// Program Control Logic
// If, Else If, Else statements
// For Loops
// While Loops
// Functions
// Arrays
//
// Follow prompts below, look for the TODO: comments. Make sure to read carefully.
// All Code should be well commented.

// TODO: You are going to need to modify the following. Documnet what you change.
#include <iostream>
#include <iomanip>
using namespace std;

// Function Declarations
// TODO: Write a function declaration and implimentation for a function that:
//          Takes in three characters and returns the sum of any numbers that are included
//          Characters must be passed in as char
//          Example:    Input: A,B,C Returns: 0
//                      Input: 1,4,Z Returns: 5
//                      Input: 8,G,7 Returns: 15

int charSum(char a, char b, char c)
{
    // Looked at my code from LM 4 from CS 171
    // Used CS book
    int A, B, C;
    if (!(isdigit(a)))
    {          // Check if char is a digit or not
        A = 0; // If char is a letter
    }
    else
    {               // If character is a digit
        A = int(a); // Get Ascii number from character
        A = A - 48; // Subtract 48 to get exact number from character
    }
    if (!(isdigit(b)))
    {
        B = 0;
    }
    else
    {
        B = int(b);
        B = B - 48;
    }
    if (!(isdigit(c)))
    {
        C = 0;
    }
    else
    {
        C = int(c);
        C = C - 48;
    }

    int sum;         // Create variable to return
    sum = A + B + C; // Add all other int vairables
    return sum;
}

// TODO: Write a function declaration and implimentation for a function that:
//           Takes in a string as a reference, then switches the case of all characters
//           The return should be void
//           Example:    Input: |CS is Amazing!|     Output: |cs IS aMAZING!|
//                       Input: |12345|              Output: |12345|
//                       Input: |this is all lower|  Output: |THIS IS ALL LOWER|

void switchCase(string a)
{
    // Used CS book
    // Used LM 4 from CS 171
    // I looked at toLower and toHigher on cplusplus.com
    // Initalize variables
    int i = 0;
    string inverse;
    char letter;

    // Go through the length of the string
    while (i < a.size())
    {
        char aChar = a[i];
        if (islower(aChar))
        {
            letter = toupper(aChar);
            inverse = inverse + letter;
        }
        if (isupper(aChar))
        {
            letter = tolower(aChar);
            inverse = inverse + letter;
        }
        if (isspace(aChar))
        {
            inverse = inverse + " ";
        }
        i++;
    }
    cout << inverse << endl;
}

int main()
{
    // TODO: Declare two integers. Assign them interesting values. Output the evaluation of the numeric operators (+,-,*,/,%)
    // Declare and calculate ints
    int int1 = 1, int2 = 3;
    int sum = int1 + int2;
    int minus = int1 - int2;
    int multiply = int1 * int2;
    int divide = int1 / int2;
    int mode = int1 % int2;

    cout << "Sum: " << sum << endl;
    cout << "Minus: " << minus << endl;
    cout << "Multiply: " << multiply << endl;
    cout << "Divide: " << divide << endl;
    cout << "Mode: " << mode << endl;

    // TODO: Write code that asks the user for an amount of time in hours. This input can be a decimal. Output the number of seconds represented by the input, rounded up.
    //           Example:    Input: 1.5      Output: 90 minutes
    //                       Input: 0.12     Output: 8 minutes

    int hour, minutes;
    cout << "Please enter a hour to be converted to mintues" << endl;
    cin >> hour;

    // Convert hours to minutes
    minutes = hour * 60;
    cout << minutes << " Minutes" << endl;

    // TODO: Capture character from the user and display the ASCII value. This should also include whitespace characters like <tab>, <space> and <enter>
    //           Remember you may need to use cin.ignore()
    char userChar;
    cout << "Please enter a character: " << endl;
    cin >> userChar;

    // Figure out whitespace characters

    cout << "Your character: " << userChar << " has a ASCII value of " << int(userChar) << endl;

    // Generate a random number between 1 and 10
    int testNum = (rand() % 10) + 1;

    // TODO: Add a comment to the above line to describe what is going on. What else should you add to the program to make this interesting?
    cout << "The Test Number between 1 and 10 is " << testNum << endl;

    // TODO: Use If / else statements to tell the user if testNum is greater, equal or less than 5
    if (testNum > 5)
    {
        cout << "The test number is greater than 5" << endl;
    }
    if (testNum < 5)
    {
        cout << "The test number is less than 5" << endl;
    }
    if (testNum == 5)
    {
        cout << "The test number is greater than 5" << endl;
    }

    // TODO: Ask the user for a numeric day of the week. Use a switch statement to display the text representation of that day
    //               Example:    Input: 0    Output: Sunday
    //                           Input: 5    Output: Friday
    //                           Input: 8    Output: Error
    int userWeek;
    cout << "Please enter a numberic day of the week" << endl;
    cin >> userWeek;
    switch (userWeek)
    {
    case 0:
        cout << "Sunday" << endl;
        break;
    case 1:
        cout << "Monday" << endl;
        break;
    case 2:
        cout << "Tuesday" << endl;
        break;
    case 3:
        cout << "Wednesday" << endl;
        break;
    case 4:
        cout << "Thursday" << endl;
        break;
    case 5:
        cout << "Friday" << endl;
        break;
    case 6:
        cout << "Saturday" << endl;
        break;
    default:
        cout << "Error" << endl;
        break;
    }
    // TODO: Write a for loop to make the following pattern:
    //  * * * * 4
    //  * * * 4 5
    //  * * 4 5 6
    //  * 4 5 6 7
    //  4 5 6 7 8
    //
    //  At most you can use 1 if statement.
    // I referenced LM 5 from cs 171
    for (int i = 0; i < 5; i++) // Create a for loop that will cycle through 5 times
    {
        int k = 4;                   // Create a variable that will print out the numbers
        for (int j = 4; j >= 0; j--) // Create a for loop that will cycle through 5 times
        {
            if ((i) < j) // If i is less than j, the it will print out *. This creates ethe upside down effect
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

    // TODO: Write a while loop that counts the distance between two numbers.
    //             Example: Input: 4, 10     Output: 4 5 6 7 8 9 10, Distance: 6
    //             Example: Input: 10, 5     Output: 10 9 8 7 6 5, Distance: -5

    int input1, input2;
    int distance = 0;
    cout << "Enter first number: " << endl;
    cin >> input1;
    cout << "Enter second number: " << endl;
    cin >> input2;

    if (input1 == input2)
    {
        cout << "Invalid Input" << endl;
    }
    else
    {
        if (input1 < input2)
        {
            while (input1 != (input2 + 1)) // Add a plus one so that it will print out the last number
            {
                cout << input1 << " ";
                input1++;
                distance++;
            }
            distance--; // Subtract a distance because there is a plus one added on the while loop
        }
        else
        {
            while (input2 != (input1 - 1)) // Add a minus one so that it will print out the last number
            {
                cout << input1 << " ";
                input1--;
                distance--;
            }
            distance++; // Add a distance because there was a minus one added on the while loop
        }

        cout << endl;
        cout << "Distance: " << distance << endl; // Display the distance between the two numbers
    }

    // TODO: Initilize an array of integers called myArray. It should contain 10 different numbers
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
    cout << "myArray: ";
    for (int i = 0; i < 10; i++) {
        cout << myArray[i] << " ";
    }
        cout << endl;

    cout << "yarrAym: ";
    for (int i = 0; i < 10; i++) {
        cout << yarrAym[i] << " ";
    }
        cout << endl;
    // TODO: Sum up the contents of both arrays, confirm using code that they are the same value
    int sumMyArray = 0;
    int sumyarrAym = 0;
    for (int i = 0; i < 10; i++) {
       sumMyArray = sumMyArray + myArray[i];
    }
    cout << "Sum of myArray is: " << sumMyArray << endl;

    for (int i = 0; i < 10; i++) {
        sumyarrAym = sumyarrAym + yarrAym[i];
    }
    cout << "Sum of yarrAym is: " << sumyarrAym << endl;

    if (sumMyArray == sumyarrAym) {
        cout << "The sum of myArray and yarrAym are the same value" <<endl;
    } else {
        cout << "The sum of myArray and yarrAym are not the same value" << endl;
    }

    // TODO: Use the two functions declared above (the character summer and the string case swapper)
    //           Make sure you show that the functions are working

    // Run charSum
    int test = charSum('8', 'G', '7');
    cout << test << endl;
    
    //Run switchCase
    switchCase("CS is Amazing!");
}

// Function Implimentations