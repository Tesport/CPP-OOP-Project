#pragma once

class DatabaseMethods {
public:
    virtual void addItem() = 0;
    virtual void viewAllItems() = 0;
    virtual inline viewItemByID() const = 0;
    virtual void deleteItem() = 0;
    virtual void searchItems() const = 0;
    virtual void showItemList() const = 0;
    virtual void sortItems() = 0;
};