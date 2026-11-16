#ifndef ITEM_H
#define ITEM_H
#include <string>

class Item {
private: 
    std::string name;
    double price;

public:
    Item();
    Item(std::string n, double p);
    std::string getName();
    double getPrice();




};
#endif // ITEM_H