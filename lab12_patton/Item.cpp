#include "Item.h"

Item::Item() : name(""), price(0.0) {}

Item::Item(std::string n, double p) : name(n), price(p) {}

std::string Item::getName() {
    return name;
}

double Item::getPrice() {
    return price;
}