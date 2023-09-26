# Instructions  
This program is actually an add to the Math Tutor we did in previous weeks. You can start fresh or modify it  to display a menu allowing the user to select addition, subtraction, multiplication, or division problem. The final selection on the menu should let the user quit the program. After the user has finished the math problem, the program should display the menu again. This process is repeated until the user chooses to quit the program. Remeember the Lecture Video for this week?

Here's a short demonstration of how the program should function. Your messages to the user may vary from this one, but the functionality should work similarly.




Use a switch statement after displaying the menu of choices.

Input Validation: If the user selects an item that is not on the menu, display an error message and loop again to display the menu.  (Assume the user enters a single character, use the default constructor of the switch statement to check for an input error.)

Addition: Choose 2 random numbers. Top number between 2 and 500. Bottom number less than top number and between 1 and 99. (HINT: Generate num1 and num2, then use a while loop to check that num2 is less than num1. If it's not, then generate a new num2 and keep looping until you find a num2 that fits both criteria: less than the top number and between 1 and 99.)

Subtraction: Choose 2 random numbers. The top number is between 2 and 500. The bottom number is between 1 and 500 and less than the top. (HINT: use the same technique as above, a while loop to validate that num2 is less than num1)

Multiplication: Choose 2 random numbers between 1 and 12. (Easy, peasy. No while loop needed here.)

Division: Ensure there is no remainder. Number 1 should be between 10 and 999. Number 2 is between 1 and 9. (HINT: Use a while loop to validate that there is no remainder. The modulus operator is very useful here.)

===================================================================================

Pseudocode for generating 2 numbers for the division to ensure there is no remainder.

Generate num1, a random number between 1 and 999
Generate num2, a random number between 1 and 9
while (num1 mod num2) is not equal to zero
generate  another num 2 and loop
calculate the result of num1 / num2
get answer from user
if answer equals the result
display a message of congratulations
else 
display a user friendly message about the incorrect answer