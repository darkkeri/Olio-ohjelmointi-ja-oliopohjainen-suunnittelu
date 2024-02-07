#include "kerrostalo.h"

Kerrostalo::Kerrostalo() {
    cout<<"Kerrostalo luotu"<<endl;
    cout<<"Maaritetaan koko kerrostalon kaikki asunnot"<<endl;
    eka.maaritaAsunnot();
    cout<<"Maaritetaan katutason kerrokselta perittyja asuntoja"<<endl;
    toka.maaritaAsunnot();
    kolmas.maaritaAsunnot();
}

double Kerrostalo::laskeKulutus(double hinta){
    double kulutus = eka.laskeKulutus(hinta) + toka.laskeKulutus(hinta) + kolmas.laskeKulutus(hinta);
    return kulutus;
}
