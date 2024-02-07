#include "kerros.h"

Kerros::Kerros()
{
    cout<<"Kerros luotu"<<endl;
}

void Kerros::maaritaAsunnot(){
    cout<<"Maaritetaan 4kpl kerroksen asuntoja"<<endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);
}

double Kerros::laskeKulutus(double hinta){
    double kulutus = as1.asukasMaara * as1.neliot * hinta + as2.asukasMaara * as2.neliot * hinta + as3.asukasMaara * as3.neliot * hinta + as4.asukasMaara * as4.neliot * hinta;
    return kulutus;
}
