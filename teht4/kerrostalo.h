#include <iostream>
#include "katutaso.h"
using namespace std;

#ifndef KERROSTALO_H
#define KERROSTALO_H


class Kerrostalo
{
public:
    Kerrostalo();
    double laskeKulutus(double);
private:
    Katutaso eka;
    Kerros toka;
    Kerros kolmas;
};

#endif // KERROSTALO_H
