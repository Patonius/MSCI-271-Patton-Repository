#include <iostream>
#include <string>
using namespace std;

int main() {
    // ========================
    // Part 1 – Basic Input/Output
    // ========================
    string name;
    int grade1, grade2;

    cout << "Name: ";
    cin >> name;

    cout << "Grade 1: ";
    cin >> grade1;

    cout << "Grade 2: ";
    cin >> grade2;
    // ========================
    // Part 2 – Arithmetic & Expressions
    // ========================
    int total;
    total = grade1 + grade2;
    double average;
    average = total / 2.0;
   
    cout << "Total = " << total << endl;
    cout << "Average = " << average << endl;

    // ========================
    // Part 3 – Constants & Escape Sequences
    // ========================
    const int MAX_SCORE = 100;

    // TODO: Print each grade in the form "Grade X: <score> out of MAX_SCORE"
    // Use endl or \n for line breaks
    cout << "Grade 1: " << grade1 << " out of " << MAX_SCORE << endl;
    cout << "Grade 2: " << grade2 << " out of " << MAX_SCORE << endl;

    // ========================
    // Part 4 – Increment/Decrement
    // ========================
    int counter = 0;

    cout << "Initial counter = " << counter << endl;

    cout << "counter++ gives " << counter++
        << ", now counter = " << counter << endl;

    cout << "++counter gives " << ++counter
        << ", now counter = " << counter << endl;
 

    return 0;
}
