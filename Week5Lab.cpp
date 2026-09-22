#include <iostream>
using namespace std;

int main () {

    int record1 = 1, record2 = 2, record3 = 1, record4 = 3, record5 = 2, record6 = 2;
        
    int phoneCount = 0, headphonesCount = 0, chargerCount = 0;

    for (int i = 1; i <= 6; i++)  {//variable integer
        int saleType = 0; //tempVariable

        //for loop
        if (i == 1) {
            saleType = record1;
        } else if (i == 2) {
            saleType = record2;
        } else if (i == 3) {
            saleType = record3;
        } else if (i == 4) {
            saleType = record4;
        } else if (i == 5) {
            saleType = record5;
        } else if (i == 6) {
            saleType = record6;
        }

        //Switch statement
        switch (saleType) {
            case 1:
                phoneCount++;
                break;
            case 2:
                headphonesCount++;
                break;
            case 3:
                chargerCount++;
                break;
            default:
                cout << "Uknown Item" << endl;
        }
    }
    
    cout << "=== Daily Sales Summary ===" << endl;
    cout << "Phone: " << phoneCount << endl;
    cout << "Headphones: " << headphonesCount << endl;
    cout << "Charger: " << chargerCount << endl;
    
    return 0;
}