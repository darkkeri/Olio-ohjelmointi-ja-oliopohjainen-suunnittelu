#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int main(){
    int arvaus;
    int oikealuku;
    srand(time(NULL));
    oikealuku = rand()% 21;

    do{
        cout<<"Arvaa kokonaisluku 1-20: "<<endl;
        cin>>arvaus;

        if(arvaus==oikealuku){
            cout<<"oikea vastaus"<<endl;
        } else if(arvaus>oikealuku){
            cout<<"luku on pienempi"<<endl;
        } else if(arvaus<oikealuku){
            cout<<"luku on suurempi"<<endl;
        }
    } while (arvaus != oikealuku);
    return 0;
}
