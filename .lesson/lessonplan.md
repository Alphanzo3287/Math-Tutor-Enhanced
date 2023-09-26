# Lesson plan
#include <iostream>
#include <iomanip>
#include <random>
using namespace std;

int main()
{
   int num1,          // The first random number
       num2,          // The second random number
       choice,        // The user's choice of problem
       studentAnswer, // The student's answer
       correctAnswer; // The correct answer
   
   // Create a random number engine.
   random_device engine;
   
   // Create distribution objects.
   uniform_int_distribution<int> randomInt999(1, 999);
   uniform_int_distribution<int> randomInt500(1, 500);
   uniform_int_distribution<int> randomInt100(1, 100);
   uniform_int_distribution<int> randomInt9(1, 9);

   do
   {  // Display the menu and get a choice.
      cout << "\tMath Tutor Menu\n";
      cout << "------------------------------\n";
      cout << "1. Addition problem\n";
      cout << "2. Subtraction problem\n";
      cout << "3. Multiplication problem\n";
      cout << "4. Division problem\n";
      cout << "5. Quit this program\n";
      cout << "------------------------------\n";
      cout << "Enter your choice (1-5): ";
      cin  >> choice;
      
      // Validate the choice.
      while (choice < 1 || choice > 5)
      {
         cout << "The valid choices are 1, 2, 3, "
              << "4, and 5. Please choose: ";
         cin >> choice;
      }

      // Produce a problem.
      switch (choice)
      {
      case 1:  // Addition problem
               // Generate two random numbers in the
               // range 1-999.
               num1 = randomInt999(engine);   
               num2 = randomInt999(engine);
               
               // Calculate the correct answer.
               correctAnswer = num1 + num2;

               // Display the problem.
               cout << "\n\n";
               cout << "  " << setw(4) << num1 << endl;
               cout << " +" << setw(4) << num2 << endl;
               cout << "  " << "----"  << endl;
               cout << "   ";
               break;

      case 2:  // Subtraction problem
               // Generate two random numbers in the range
               // of 1-500.
               num1 = randomInt500(engine);   
               num2 = randomInt500(engine);
               
               // Make sure num2 <= num1...
               while (num2 > num1)
                   num2 = randomInt500(engine);
               
               // Get the correct answer.
               correctAnswer = num1 - num2;

               // Display the problem.
               cout << "\n\n";
               cout << "  " << setw(4) << num1 << endl;
               cout << " -" << setw(4) << num2 << endl;
               cout << "  " << "----"  << endl;
               cout << "   ";
               break;

      case 3:  // Multiplication problem
               // Generate two random numbers. The first in
               // the range 1 - 100, the second in the
               // range 1 - 9.
               num1 = randomInt100(engine);
               num2 = randomInt9(engine);
               
               // Calculate the correct answer.
               correctAnswer = num1 * num2;

               // Display the problem.
               cout << "\n\n";
               cout << "  " << setw(4) << num1 << endl;
               cout << " *" << setw(4) << num2 << endl;
               cout << "  " << "----"  << endl;
               cout << "   ";
               break;

      case 4:  // Division problem with no remainder
               // Generate a single digit divisor.
               num2 = randomInt9(engine);
               
               // Generate a number that is a multiple
               // of num2...
               num1 = num2 * randomInt9(engine);
               
               // Calculate the correct answer.
               correctAnswer = num1 / num2;

               // Display the problem.
               cout << "\n\n";
               cout << "  " << num1 << " / " << num2 << " = ";
               break;

      case 5:  // The user chose to quit the program.
               cout << "Thank you for using Math Tutor.\n\n";
               break;
      }

      // If student selected a problem, get and evaluate the answer. 
      if (choice >= 1 && choice <= 4)
      {
         cin  >> studentAnswer;
         if (studentAnswer == correctAnswer)
            cout << "\n\nCongratulations! That's right.\n\n";
         else
            cout << "\n\nSorry, the correct answer is " << correctAnswer
                 << ".\n\n";
      }
   } while (choice != 5);  // Loop again if student did not choose to quit.
   return 0;
}

  