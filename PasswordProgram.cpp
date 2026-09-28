#include <iostream>
using namespace std; 

int main() {
    int password, count  = 0;
    bool isCorrect = false;

    do {
        count++;
        cout << "Attempt: " << count << " Enter Password: ";
        cin >> password;
        
        if (password == 271) {
        isCorrect = true;
        } 
    
    } while (!isCorrect);

    cout << "Access granted.\n";
    cout << "Total attempts: " << count << endl;

    return 0;
} 

