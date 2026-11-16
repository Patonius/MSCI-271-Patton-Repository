#include <iostream>
#include "Cart.h"
using namespace std;

Cart::Cart(int id) : cartId(id), itemCount(0) {}

void Cart::addItem(const Item& item) {
    if (itemCount < MAX_ITEMS) {
        items[itemCount] = item;
        itemCount++;
    } else {
        cout << "Cart is full! Cannot add more items. \n";
    }
}

double Cart::getTotal() {
    double total = 0.0;
    for (int i = 0; i < itemCount; i++) {
        total += items[i].getPrice();
    }
    return total;
}

void Cart::printReceipt(){

    cout << "=== Shopping Cart Receipt (Cart #" << cartId << ") ===\n";
    for (int i = 0; i < itemCount; i++) {
        cout << items[i].getName() << ": $" << items[i].getPrice() << "\n";
    }
    cout << "-----------------------------\n";
    cout << "Total Cost: $" << getTotal() << "\n";
}