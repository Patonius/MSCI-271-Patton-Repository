#include <iostream>
#include <string>
using namespace std;

class CPU {
private:
    // TODO: declare private data members
    string id;
    int ff, mf, cof, cot;
    double cmips;

    // TODO: write private helper function computeMIPS()
    void computeMIPS() {
        cmips = (cof * 1000000.0);
    }

public:
    // TODO: write constructor(s)
    CPU(string _id, int _ff, int _mf, int _cof, int _cot) {

        id = _id;
        ff = _ff;
        mf = _mf;
        cof = _cof;
        cot = _cot;
        computeMIPS();

    }
    // TODO: write display() function
    void display() const {
    
        cout << "CPU ID: " << id << endl;
        cout << "Fundamental Frequency: " << ff << " Hz" << endl;
        cout << "Maximum Frequency: " << mf << " Hz" << endl;
        cout << "Current Operating Frequency: " << cof << " Hz" << endl;
        cout << "Current Operating Temperature: " << cot << " *F" << endl;
        cout << "Current Computing Power (MIPS): " << cmips << endl;

    }
    // TODO: write setTemperature() function
    void setTemperature(int newTemp) {
        cot = newTemp;

        if (cot <  176) {
            cof += 200;
            if (cof > mf) {
                cof = mf;
            } 
        }
        else if (cot > 176) {
            cof -= 200;

            if (cof < ff) {
                    cof = ff;
            }
        } 

        computeMIPS();
    
    }

    // TODO: write getMIPS() function
        double getMIPS() const {
            return cmips; 
    }
};

// =================== Main Program ===================
int main() {
    const int N = 4;   // number of CPUs
    CPU cluster[N] = {
        CPU("001", 2000, 4800, 2800, 132),
        CPU("002", 2200, 5000, 3200, 131),
        CPU("003", 2100, 4900, 3400, 142),
        CPU("004", 2500, 4500, 3700, 144)
    };

    int choice;
    do {
        cout << "\n===== CPU Cluster Menu =====\n";
        cout << "1. Display all CPUs\n";
        cout << "2. Display one CPU\n";
        cout << "3. Set temperature of one CPU\n";
        cout << "4. Display total MIPS of cluster\n";
        cout << "5. Exit\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            // TODO: loop through array and call display()
            for (int i = 0; i < N; i++) {
                cluster[i].display();
                cout << endl;
            }
        }
        else if (choice == 2) {
            // TODO: ask for index and display that CPU
            int index;
            cout << "Enter CPU index (0 - 3): ";
            cin >> index;
            
            if (index >= 0 && index < N) {
                cluster[index].display();
            } else {
                cout << "Invalid index. Returning to menu" << endl;   
            }
        }
        else if (choice == 3) {
            // TODO: ask for index and new temperature
            int index, newTemp;
            cout << "Enter CPU index (0 - 3): ";
            cin >> index;

            if (index >= 0 && index < N) {
                cout << "Enter new temperature: ";
                cin >> newTemp;
                cluster[index].setTemperature(newTemp);
                cout << "Temperature updated for CPU " << index << endl;
            } else {
                cout << "Invalid index. Returning to menu" << endl;
            }
            // then update using setTemperature()
        }
        else if (choice == 4) {
            // TODO: calculate total MIPS across all CPUs
            double totalMIPS = 0.0;
            for (int i = 0; i < N; i++) {
                totalMIPS += cluster[i].getMIPS();
            }
            cout << "Total MIPS of cluster: " << totalMIPS << endl;
        }

    } while (choice != 5);

    cout << "Program exited.\n";
    return 0;
}
