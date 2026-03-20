#pragma once

class Item{
    private:
    static unsigned int count;
    unsigned int id;

    char name[100];
    unsigned double price;
    bool isTradable;

    public:
    virtual Item() = 0;
    virtual ~Item() = 0;
};