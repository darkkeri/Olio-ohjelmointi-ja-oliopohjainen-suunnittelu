#ifndef KERROS_H
#define KERROS_H
#include <iostream>

using namespace std;

class Kerros
{
public:
    Kerros();
    virtual void maaritaAsunnot();
private:
    Asunto as1;
    Asunto as2;
    Asunto as3;
    Asunto as4;
};

#endif // KERROS_H
