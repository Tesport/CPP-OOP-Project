#pragma once
#include "ItemsTable.h"
#include <iostream>

Items::Items() = 0;
Items::~Items() = 0;

Items::virtual void addItem() = 0;

Items::virtual void viewAllItems() = 0;

Items::virtual inline viewItemByID() const= 0;

Items::virtual void deleteItem() = 0;

Items::virtual inline searchItems() const = 0;

Items::virtual void showItemList() const = 0;

Items::virtual void sortItems()= 0;
