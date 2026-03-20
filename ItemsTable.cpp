#pragma once
#include "ItemsTable.h"
#include <iostream>

ItemsTable::ItemsTable() = 0;
ItemsItemsTable::~ItemsTable() = 0;

ItemsTable::addItem(char n[100], unsigned double p, bool isT) 
: Item(n[100], p, isT) { 
	
	std::cout << "An item with these parameters was added" 
};

ItemsTable::viewAllItems() = 0;

ItemsTable::viewItemByID() const= 0;

ItemsTable::deleteItem() = 0;

ItemsTable::searchItems() const = 0;

ItemsTable::showItemList() const = 0;

ItemsTable::sortItems()= 0;
