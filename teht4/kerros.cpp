#include "kerros.h"

Kerros::Kerros()
{
    cout<<"Kerros luotu"<<endl;
}

virtual void Kerros::maaritaAsunnot(){
    cout<<"Maaritetaan 4kpl kerroksen asuntoja"<<endl;
    as1.maarita(2, 100);
    as2.maarita(2, 100);
    as3.maarita(2, 100);
    as4.maarita(2, 100);
}

double Kerros::laskeKulutus(double hinta){
    double kulutus = asukasMaara * neliot * hinta;

    return kulutus;
}
