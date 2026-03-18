#include "Item.h"
#include <iostream>

Item::Item(std::string n, unsigned int p, bool isT) 
: name(n), price(p), isTradable(isT) { id = ++count; }

Item::~Item() {}
