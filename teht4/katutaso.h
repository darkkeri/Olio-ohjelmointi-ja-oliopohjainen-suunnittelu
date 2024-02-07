#include <iostream>
#include "kerros.h"

using namespace std;

#ifndef KATUTASO_H
#define KATUTASO_H





class Katutaso : public Kerros
{
public:
    Katutaso();
    double laskeKulutus(double);
    void maaritaAsunnot() override;

private:
    Asunto as1;
    Asunto as2;
};

#endif // KATUTASO_H
