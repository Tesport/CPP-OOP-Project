#pragma once

class Client{
    private:
    static unsigned int count;
    unsigned int id;

    char name[50];
    char lastName[50]

    public:
    virtual Client() = 0;
    virtual ~Client() = 0;
};