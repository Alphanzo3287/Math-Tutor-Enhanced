// Alphanzo Moore

//CIS-5 Online

// September 24, 2023

// Lab 5B: Alphanzo Moore - <Math Tutor Enhanced>

#include <iostream>
#include <cstdlib>   // for rand() and srand()
#include <ctime>     // for time()

using namespace std;

// Function to generate a random number between min and max
int getRandomNumber(int min, int max) {
    return rand() % (max - min + 1) + min;
}

// Function to validate division problems with no remainder
bool isValidDivision(int num1, int num2) {
    return (num1 % num2) == 0;
}

int main() {
    srand(time(0));  // Initialize random number generator with current time

    while (true) {
        cout << "Math Tutor Menu:" << endl;
        cout << "1. Addition" << endl;
        cout << "2. Subtraction" << endl;
        cout << "3. Multiplication" << endl;
        cout << "4. Division" << endl;
        cout << "5. Quit" << endl;

        int choice;
        cout << "Enter your choice (1-5): ";
        cin >> choice;

        switch (choice) {
            case 1: // Addition
            {
                int num1 = getRandomNumber(2, 500);
                int num2 = getRandomNumber(1, 99);
                int answer;
                cout << "What is " << num1 << " + " << num2 << "? ";
                cin >> answer;
                if (answer == num1 + num2) {
                    cout << "Correct! Well done." << endl;
                } else {
                    cout << "Incorrect. The correct answer is " << num1 + num2 << endl;
                }
                break;
            }
            case 2: // Subtraction
            {
                int num1 = getRandomNumber(2, 500);
                int num2 = getRandomNumber(1, num1 - 1);
                int answer;
                cout << "What is " << num1 << " - " << num2 << "? ";
                cin >> answer;
                if (answer == num1 - num2) {
                    cout << "Correct! Great job." << endl;
                } else {
                    cout << "Incorrect. The correct answer is " << num1 - num2 << endl;
                }
                break;
            }
            case 3: // Multiplication
            {
                int num1 = getRandomNumber(1, 12);
                int num2 = getRandomNumber(1, 12);
                int answer;
                cout << "What is " << num1 << " * " << num2 << "? ";
                cin >> answer;
                if (answer == num1 * num2) {
                    cout << "Correct! Excellent." << endl;
                } else {
                    cout << "Incorrect. The correct answer is " << num1 * num2 << endl;
                }
                break;
            }
            case 4: // Division
            {
                int num1, num2;
                do {
                    num1 = getRandomNumber(10, 999);
                    num2 = getRandomNumber(1, 9);
                } while (!isValidDivision(num1, num2));
                
                int answer;
                cout << "What is " << num1 << " / " << num2 << "? ";
                cin >> answer;
                if (answer == num1 / num2) {
                    cout << "Correct! Fantastic." << endl;
                } else {
                    cout << "Incorrect. The correct answer is " << num1 / num2 << endl;
                }
                break;
            }
            case 5: // Quit
                cout << "Goodbye!" << endl;
                return 0;
            default:
                cout << "Invalid choice. Please select a valid option (1-5)." << endl;
        }
    }

    return 0;
}

