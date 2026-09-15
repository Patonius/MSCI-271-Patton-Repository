#include <iostream>
using namespace std;

int main() {

       string itemName;
       double price;
       const double FEE = 0.50;
       double sold = 0;

       cout << "Enter the name of the item: ";
       cin >> itemName;

       cout << "Enter the price of the item: ";
       cin >> price;

       sold++;
       double total = price + FEE;

       cout << "\n--- Receipt ---\n";
       cout << "Item:\t\t" << itemName << "\n";
       cout << "Price:\t\t$" << price << "\n";
       cout << "Fee:\t\t$" << FEE << "\n";
        cout << "Total:\t\t$" << total << "\n";
        cout << "Items sold:\t" << sold << "\n";

        return 0;
}