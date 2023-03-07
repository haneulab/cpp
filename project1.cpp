/**
The program does the following. 
1. Asks a user to enter 3 numbers.
2. Prompts the user the numbers they entered.
3. Prompts the user the average of those three numbers.
*/

#include <iostream>

using namespace std;

int main () {

    const int length = 3;
    float values[length];
    unsigned int sum = 0;


    for (unsigned int i = 0; i < length; i ++) {
        cout << "Please enter integer value for " << i << "th position: ";
        while (true) {
            cin >> values[i];
            /**
             CHECK, if the value persists the type integer from user input (convertable to integer types such as "1", but NOT "a"...)
             IF OK, break;
             IF NOT, repete the input process until OK.
             */
            break;
        }
        sum += values[i];
    }

    cout << "You entered the following numbers:";
    for (unsigned int i = 0; i < length; i ++) {
        cout << " " << values[i];    
    }
    cout << "." << endl;


    double average = static_cast<double>(sum)/length;

    cout << "The average for the list of numbers you entered is: " << average << endl;


    return 0;
}