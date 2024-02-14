#include <iostream>
#include "asunto.h"
using namespace std;

#ifndef KERROS_H
#define KERROS_H




class Kerros
{
public:
    Kerros();
    virtual ~Kerros();
    virtual void maaritaAsunnot();
    double laskeKulutus(double);

private:
    Asunto *as1;
    Asunto *as2;
    Asunto *as3;
    Asunto *as4;
};

#endif // KERROS_H
