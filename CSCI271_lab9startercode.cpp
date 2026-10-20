#include <iostream>
#include <string>
#include <iomanip>
using namespace std;

const int MAX = 5;
const int COURSE_COUNT = 3;

// Function prototypes
void calculateStudent(int i, double Score[][3], double &total, double &average);
void displayAll(int n, string NameArr[], double Score[][3]);
int findTopStudent(int n, double Score[][3]);

int main()
{
    // Test data stored directly in main()
    int n = 3;
    string NameArr[MAX] = {"Alice", "Bob", "Carl"};
    double Score[MAX][3] = {
        {90, 85, 95},
        {70, 80, 75},
        {88, 92, 84}
    };

    cout << fixed << setprecision(2);

    // TODO:
    // 1. print the title
    // 2. call displayAll(...)
    // 3. find the top student index
    // 4. call calculateStudent(...) for the top student
    // 5. print the top student's name and total
    
    cout << "=== Student Grade Report ===" << endl;

    displayAll(n, NameArr, Score);
  
    int topStudentIndex = findTopStudent(n, Score);
    double topTotal, topAverage;
    calculateStudent(topStudentIndex, Score, topTotal, topAverage);

    cout << "\nTop student: " << NameArr[topStudentIndex] << " | Total = " << topTotal 
    << " | Average = " << topAverage << "\n";
    

    return 0;
}

// Calculate total and average for one student
void calculateStudent(int i, double Score[][3], double &total, double &average)
{
    // TODO:
    // 1. calculate the total of the 3 courses for student i
    total = 0;

    for (int j = 0; j < COURSE_COUNT; j++) {
        total += Score[i][j]; 
    }

    // 2. calculate the average
    average = total / COURSE_COUNT;
    
}

// Display all students' information
void displayAll(int n, string NameArr[], double Score[][3])
{

    string courses[COURSE_COUNT] = {"Math", "C Programming", "Operating Systems"};
    // TODO:
   
    for (int i = 0; i < n; i++) {
        
        double total, average;

        calculateStudent(i, Score, total, average);
        cout << NameArr[i] << " | ";

        for (int j = 0; j < COURSE_COUNT; j++) {
           cout << courses[j] << " = " << Score[i][j] << " | ";      
        }
        cout << "Total = " << total << " | Average = " << average << "\n"; 
    }
    // 1. loop through each student
    // 2. call calculateStudent(...) for each student
    // 3. print name, 3 grades, total, and average
    // Hint: do not repeat the total/average logic here
}

// Find the index of the student with the highest total score
int findTopStudent(int n, double Score[][3])
{
    // TODO:
    double maxTotal = 0;
    int topStudentIndex = 0;

    for (int i = 0; i < n; i++) {
        double total, average;
        calculateStudent(i, Score, total, average);

        if (total > maxTotal) {
            maxTotal = total;
            topStudentIndex = i;
        }
    }
    return topStudentIndex;
    // Hint: reuse calculateStudent(...) instead of recalculating totals here
}