#include <iostream>
#include "Cart.h"
#include "Item.h"

int main() {
    // Create Cart with ID 101
    Cart cart(101);

    // Create items
    Item i1("Apple", 0.99);
    Item i2("Milk", 3.50);
    Item i3("Bread", 2.99);

    // Add to cart
    cart.addItem(i1);
    cart.addItem(i2);
    cart.addItem(i3);

    // Print receipt
    cart.printReceipt();

    return 0;
}