// ===========================================
// CSCI 271 – Lab 10: Student Information Management (Struct + File I/O)
// Objective:
// Practice using struct, functions, and file I/O in C++.
// The program automatically creates sample student records,
// saves them to a file, reads them back, and displays results.
// ===========================================

// TODO: include required headers
// (e.g., iostream, fstream, etc.)
#include <string>
using namespace std;
// =======================
// Struct Definition
// =======================
struct Student {
    // TODO: Add required fields (7 total)
 
};

// =======================
// Function Prototypes 
// =======================
void saveToFile(Student s[], int n, const string& filename);
int loadFromFile(Student s[], const string& filename);
void displayAll(Student s[], int n);
int countHonors(Student s[], int n);
void queryByCity(Student s[], int n, const string& city);

// =======================
// Function Definitions
// =======================

// Step 2 – Write all students to file
void saveToFile(Student s[], int n, const string& filename) {
    // TODO: Use ofstream to open file and write all student data
    // Example: out << s[i].id << " " << s[i].name << " " << ... << endl;
    cout << "[1] Saving data to " << filename << " ..." << endl;
}

// Step 3 – Read students from file
int loadFromFile(Student s[], const string& filename) {
    // TODO: Use ifstream to read all student data from the file
    // and count how many records were read successfully
    cout << "[2] Loading students from " << filename << " ..." << endl;
    return 0; // TODO: Replace with actual number of records read
}

// Step 4 – Display all students
void displayAll(Student s[], int n) {
    // TODO: Loop through all students and print formatted info
    cout << "[3] Displaying all students:" << endl;
}

// Step 5 – Count students with GPA >= 3.0
int countHonors(Student s[], int n) {
    // TODO: Return count of students whose GPA >= 3.0
    return 0;
}

// Step 6 – Query by city
void queryByCity(Student s[], int n, const string& city) {
    // TODO: Display all students whose city matches the given input
    // If none match, print "No students found in that city."
}

// =======================
// Main Function
// =======================
int main() {
    Student students[100];
    int n = 3;

    // Step 1 – Create and store sample data
    students[0] = {"S01", "Tom", "MATH", "Football", 2.8, "tom@google.com", "Modesto"};
    students[1] = {"S02", "Alice", "CS", "Reading", 3.5, "alice@google.com", "Modesto"};
    students[2] = {"S03", "Scott", "CS", "Basketball", 3.2, "scott@google.com", "SanJose"};

    // Step 2 – Write to file
    saveToFile(students, n, "students.txt");

    // Step 3 – Read back from file
    Student loaded[100];
    int count = loadFromFile(loaded, "students.txt");

    // Step 4 – Display all students
    displayAll(loaded, count);

    // Step 5 – Count honors students
    cout << "\n[4] Students with GPA >= 3.0: "
         << countHonors(loaded, count) << endl;

    // Step 6 – Query by city (example: Modesto)
    queryByCity(loaded, count, "Modesto");

    cout << "\nProgram finished." << endl;
    return 0;
}
