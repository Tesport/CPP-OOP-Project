#include "DatabaseMethods.h"
#include "Item.h"

struct NumeratedItems {
    unsigned int id;
    Items item;
};

class ItemsTable : public DatabaseMethods {
    private:

    public:
    ItemsTable() = 0;
    ~ItemsTable() = 0;

    virtual void addItem() = 0;
    virtual void viewAllItems() = 0;
    virtual inline viewItemByID() const= 0;
    virtual void deleteItem() = 0;
    virtual void searchItems() const = 0;
    virtual void showItemList() const = 0;
    virtual void sortItems()= 0;
}