#include "kerrostalo.h"

Kerrostalo::Kerrostalo() {
    eka = new Katutaso;
    toka = new Kerros;
    kolmas = new Kerros;
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritetaan koko kerrostalon kaikki asunnot"<<endl;
    eka->maaritaAsunnot();
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja"<<endl;
    toka->maaritaAsunnot();
    kolmas->maaritaAsunnot();
}

Kerrostalo::~Kerrostalo(){
    cout<<"Kerrostalo tuhottu"<<endl;
    delete eka;
    delete toka;
    delete kolmas;
    eka = nullptr;
    toka = nullptr;
    kolmas = nullptr;
}

double Kerrostalo::laskeKulutus(double hinta){
    double kulutus = eka->laskeKulutus(hinta) + toka->laskeKulutus(hinta) + kolmas->laskeKulutus(hinta);
    return kulutus;
}
