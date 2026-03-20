#include "Item.h"
#include <iostream>

count = 0;

Item::Item(char n[100], unsigned double p, bool isT) 
: name(n), price(p), isTradable(isT) { id = ++count; }

Item::~Item() = default;

