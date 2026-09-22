#include <iostream>
using namespace std;

int main () {

    int code1 = 1, code2 = 2, code3 = 3;
    double price = 0.0, price1 = 10.00, price2 = 5.25, price3 = 7.50, cash = 0.00;
    string itemName = "", itemName1 = "Coke", itemName2 = "Pepsi", itemName3 = "Water";

    cout << "Enter the item code and Cash amount: " << endl;
    int itemCode;
    cin >> itemCode >> cash;
    if (cin.fail()) {
        cout << "Input Error!" << endl;
        return 1;
    }

    if (itemCode == code1) {
        price = price1;
        itemName = itemName1;
    } else if (itemCode == code2) {
        price = price2;
        itemName = itemName2;
    } else if (itemCode == code3) {
        price = price3;
        itemName = itemName3;
    } else {
        cout << "Invalid Item Code! (1-3 only)" << endl;
        return 1;
    }

    if (cash < price) {
        cout << "Insufficient Cash! " << itemName << " costs $" << price << endl;
    } else {
        double change = cash - price;
        cout << "Item: " << itemName << endl;
        cout << "Price: $" << price << endl;
        cout << "Cash: $" << cash << endl;
        if (change == 0) {
            cout << "No change due." << endl;
        } else {
            cout << "Change: $" << change << endl;
        }
    }

    return 0;
}