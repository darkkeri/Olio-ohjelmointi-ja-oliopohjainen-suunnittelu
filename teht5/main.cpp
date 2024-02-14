#include <iostream>
#include "kerrostalo.h"

using namespace std;


int main(){
    Kerrostalo *doomed = new Kerrostalo;
    cout<<"Kerrostalon kulutus = "<<doomed->laskeKulutus(1)<<endl;
    delete doomed;
    doomed = nullptr;
    return 0;
}


