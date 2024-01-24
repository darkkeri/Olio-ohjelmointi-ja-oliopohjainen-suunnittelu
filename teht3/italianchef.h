#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>

using namespace std;

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef(string, int, int);
    ~ItalianChef();
    string getName();
    void makePasta();
private:
    int vesi;
    int jauhot;
};

#endif // ITALIANCHEF_H
