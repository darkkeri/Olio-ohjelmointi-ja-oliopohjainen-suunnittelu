#include "asunto.h"

Asunto::Asunto()
{
    cout<<"Asunto luotu"<<endl;
}

void Asunto::maarita (int newasukasMaara, int newneliot){
    asukasMaara = newasukasMaara;
    neliot = newneliot;
    cout<<"Asunto maaritetty asukkaita = "<<asukasMaara<<" ja nelioita = "<<neliot<<endl;
}

double Asunto::laskeKulutus(double hinta){
    double kulutus = asukasMaara * neliot * hinta;
    cout<<"Asunnon kulutus, kun hinta = "<<hinta<<" on "<<kulutus<<endl;
    return kulutus;
}


