#pragma once

class Item{
    private:
    static unsigned int count;

    unsigned int id;
    std::string name;
    unsigned int price;
    bool isTradable;

    public:
    virtual Item() = 0;
    ~Item() = 0;
};