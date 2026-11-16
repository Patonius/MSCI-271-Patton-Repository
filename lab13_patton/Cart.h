#include "Item.h"
#ifndef CART_H
#define CART_H

class Cart {

private:
    static const int MAX_ITEMS = 100;
    Item items[MAX_ITEMS];
    int itemCount;
    int cartId;

public:
    Cart(int id);
    void addItem(const Item& item);
    double getTotal();
    void printReceipt();

};
#endif // CART_H
