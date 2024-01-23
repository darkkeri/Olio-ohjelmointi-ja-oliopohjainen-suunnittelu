#ifndef ITALIANCHEF_H
#define ITALIANCHEF_H
#include <iostream>

using namespace std;

#include "chef.h"

class ItalianChef : public Chef
{
public:
    ItalianChef();
    ~ItalianChef();
    string getName();
    void makePasta();
};

#endif // ITALIANCHEF_H
