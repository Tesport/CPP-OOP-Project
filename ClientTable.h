#pragma once
#include "DatabaseMethods.h"
#include <vector>
#include "Client.h"

struct NumeratedClient {
    unsigned int id;
    Client client;
};

class ClientTable : public DatabaseMethods {
private:


public:
    ClientTable() = 0;
    ~ClientTable() = 0;

    virtual void addItem() = 0;
    virtual void viewAllItems() = 0;
    virtual inline viewItemByID() const = 0;
    virtual void deleteItem() = 0;
    virtual void searchItems() const = 0;
    virtual void showItemList() const = 0;
    virtual void sortItems() = 0;
}