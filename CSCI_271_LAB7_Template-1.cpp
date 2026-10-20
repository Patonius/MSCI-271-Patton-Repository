#include <iostream>
#include <limits>
#include <string>
using namespace std;

int main() {
    // TODO:score array  
    double score[3][3];
    // TODO: studentcourse array
    string courseName[3] = {"Math", "C Programming", "Operating Systems"};

    bool hasData = false;
    int choice;

    do {
        cout << "\n=== Student Grade System ===\n"
             << "1) Record grades (3x3)\n"
             << "2) One student's Total & Average\n"
             << "3) Display ALL (table + per-student stats)\n"
             << "4) Exit\n"
             << "Enter choice: ";

        if (!(cin >> choice)) {
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
            cout << "Invalid input. Try again.\n";
            continue;
        }

        if (choice == 1) {
            // TODO: input 3x3 grades (0..100) with re-prompt on invalid; 
            for (int i = 0; i < 3; ++i) {
                cout << "\n" << "--- Enter Grades for Student " << i << " ---\n";

                for (int j = 0; j < 3; ++j) {
                    cout << courseName[j] << " (0-100): ";
                    cin >> score[i][j];
                    while (score[i][j] < 0 || score[i][j] > 100) {
                        cout << "Invalid. Re-enter.\n";
                        cout << courseName[j] << " (0-100): ";
                        cin >> score[i][j];
                    }
                
                }
            }    
            // TODO: after successfully recording ALL 9 values, set hasData = true
            // hasData = true;  // (do NOT set this until after your input loops)
            hasData = true;
            cout << "OK: data recorded.\n";
        }
        else if (choice == 2) {
            if (!hasData) { cout << "Please record grades first (option 1).\n"; continue; }

            // TODO: read idx (0..2); compute total = sum of 3 courses; avg = total/3.0; print
                int idx;
                cout << "Student index (0-2): ";
                cin >> idx; 
                if (idx < 0 || idx > 2) {
                    cout << "Invalid index. Re-enter.\n";
                    continue;
                } 
                double total = score[idx][0] + score[idx][1] + score[idx][2];
                double avg = total / 3.0;
                cout << "Student " << idx 
                    << " -> Math=" << score[idx][0]
                    << " C=" << score[idx][1]
                    << " OS=" << score[idx][2]
                    << " | Total=" << total
                    << " Avg=" << avg << "\n";

    
        }
        else if (choice == 3) {
            if (!hasData) { cout << "Please record grades first (option 1).\n"; continue; }
            // TODO: print 3x3 table; then for each student print total & average

            cout << "Table: rows=students, cols=[Math C OS]\n";
            for (int i = 0; i < 3; ++i) {
                cout << "S" << i << ":    " 
                << score[i][0] << "    " 
                << score[i][1] << "    " 
                << score[i][2] << "\n";
            }

            cout << "\n" << "Per-student totals & averages:\n";
            for (int i = 0; i < 3; ++i) {
                double total = score[i][0] + score[i][1] + score[i][2];
                double avg = total / 3.0;
                cout << "Student " << i 
                    << " -> Total=" << total
                    << " Avg=" << avg << "\n";
            }




        }
        else if (choice == 4) {
            cout << "Bye!\n";
        }
        else {
            cout << "Invalid choice. Enter 1, 2, 3, or 4.\n";
        }
    } while (choice != 4);

    return 0;
}
