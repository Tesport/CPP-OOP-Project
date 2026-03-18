#pragma once

class Client{
    private:
    static unsigned int count;

    unsigned int id;
    std::string name;
    std::string lastName;
    bool isTradable;

    public:
    virtual Client() = 0;
    ~Client() = 0;
};