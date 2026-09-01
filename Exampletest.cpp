#include <iostream>
using namespace std;

int main() {
        double price;
        cout << "Enter the price per Coffee: ";
        cin >> price;

        int quantity;
        cout << "Enter the amount of Coffee's purchased: ";
        cin >> quantity;

        cout << "Enter price per coffee: $" << price << "\n";
        cout << "Enter quantity: " << quantity << "\n";

        double subtotal = price * quantity;
        cout << "Subtotal: $" << subtotal << "\n";

        double tax = subtotal * .0825;
        cout << "Tax: $" << tax << "\n";

        double total = subtotal + tax;
        cout << "Total: $" << total << "\n";

        return 0;
}