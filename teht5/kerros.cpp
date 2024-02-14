#include "kerros.h"

Kerros::Kerros()
{
    cout<<"Kerros luotu"<<endl;
    as1 = new Asunto;
    as2 = new Asunto;
    as3 = new Asunto;
    as4 = new Asunto;
}

Kerros::~Kerros(){
    cout<<"Kerros tuhottu"<<endl;
    delete as1;
    delete as2;
    delete as3;
    delete as4;
    as1 = nullptr;
    as2 = nullptr;
    as3 = nullptr;
    as4 = nullptr;
}

void Kerros::maaritaAsunnot(){
    cout<<"Maaritetaan 4kpl kerroksen asuntoja"<<endl;
    as1->maarita(2, 100);
    as2->maarita(2, 100);
    as3->maarita(2, 100);
    as4->maarita(2, 100);
}

double Kerros::laskeKulutus(double hinta){
    double kulutus = as1->asukasMaara * as1->neliot * hinta + as2->asukasMaara * as2->neliot * hinta + as3->asukasMaara * as3->neliot * hinta + as4->asukasMaara * as4->neliot * hinta;
    return kulutus;
}
