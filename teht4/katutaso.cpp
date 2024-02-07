#include "katutaso.h"

Katutaso::Katutaso()
{
    cout<<"Katutaso luotu"<<endl;
}

void Katutaso::maaritaAsunnot(){
    cout<<"Maaritetaan 2kpl katutason asuntoja"<<endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
}

double Katutaso::laskeKulutus(double hinta){
    double kulutus = as1.asukasMaara * as1.neliot * hinta + as2.asukasMaara * as2.neliot * hinta;
    return kulutus;
}
