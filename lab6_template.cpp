#include <iostream>
using namespace std;

int main() {
    int choice = 0;
    int firstNum = 0, secondNum = 0;

    // firstNum and secondNum are declared outside the menu loop, so their values can be reused in Choice 2 and 3.

    bool hasInput = false; 
    // How to use hasInput:
    // - After the user enters VALID numbers in Menu Choice 1, set hasInput = true;
    // - In Choice 2 and Choice 3, if hasInput is still false, it means the user
    //   has not input numbers yet, so you should print a message like:
    //   "Please choose 1 first to input two integers."
    //   Then go back to the menu (do not run the odd/sum logic yet).

    do {
        cout << "=== Week 6 Menu Program ===\n";
        cout << "1) Input two integers (firstNum < secondNum)\n";
        cout << "2) Display all odd numbers between them (while loop)\n";
        cout << "3) Display sum of even numbers between them (for loop)\n";
        cout << "4) Quit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        if (choice == 1) {
            // TODO: Use a do...while loop to keep asking until firstNum < secondNum
            do {
                cout << "Enter two integers (firstNum < secondNum): ";
                cin >> firstNum >> secondNum;
            } while (firstNum >= secondNum);

            hasInput = true;
        
            // TODO: After valid input: hasInput = true;

        } else if(choice == 2) {
            // TODO: If hasInput is false, print a message and return to menu.
            if (!hasInput) {
                cout << "Please choose 1 first to input two integers.\n";
            } else {
                cout << "Odd numbers between " << firstNum << " and " << secondNum << ":\n";
            
                int i = firstNum + 1;
                while (i < secondNum) {
                    if(i % 2 != 0) {
                        cout << i << " ";
                    } 
                    i++;
                }
                cout << "\n";
            // TODO: Use a while loop to print all odd numbers between firstNum and secondNum.
            // HINT: Make sure your while loop updates the loop variable each time, or it may run forever.
            }


        } else if (choice == 3) {
            // TODO: If hasInput is false, print a message and return to menu.

            if (!hasInput) {
                cout << "Please choose 1 first to input two integers.\n";
            // TODO: Use a for loop to compute the sum of all even numbers between firstNum and secondNum.
            } else {
                int sum = 0;

                for(int i = firstNum; i <= secondNum; i++) {
                    if (i % 2 == 0) {
                        sum += i;
                    } 
                }
                cout << "Sum of even numbers: " << sum << "\n";
        
                }

        } else if (choice == 4) {
            // TODO: print "Goodbye!"
            cout << "Goodbye!\n";
        } else {

            cout << "Invalid choice. Please enter 1, 2, 3, or 4.\n";
            // TODO: print "Invalid choice. Please enter 1, 2, 3, or 4.\n";

        }

        cout << "\n";

    } while (choice != 4);

    return 0;
}
