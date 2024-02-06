#ifndef KATUTASO_H
#define KATUTASO_H
#include <iostream>
#include "kerros.h"

using namespace std;

class Katutaso : private Kerros
{
public:
    Katutaso();
private:
    Asunto as1;
    Asunto as2;
};

#endif // KATUTASO_H
