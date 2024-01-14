#include <iostream>
#include <cstdlib>
#include <time.h>

using namespace std;

int game(int maxnum);

int main(){
    int maxnumber;
    int arvamaara;
    cout<<"Anna arvauspelille suurin mahdollinen arvo kokonaislukuna. Pienin mahdollinen arvottu arvo on aina 1:"<<endl;
    cin>>maxnumber;

    arvamaara = game(maxnumber);
    cout<<"Arvausten maara: "<<arvamaara<<endl;
}

int game(int maxnum){
    int arvausmaara = 0;
    int arvaus;
    int oikealuku;
    srand(time(NULL));
    oikealuku = rand()% maxnum+1;

    do{
        cout<<"Arvaa kokonaisluku 1-"<<maxnum<<": "<<endl;
        cin>>arvaus;

        if(arvaus==oikealuku){
            cout<<"oikea vastaus"<<endl;
        } else if(arvaus>oikealuku){
            cout<<"luku on pienempi"<<endl;
        } else if(arvaus<oikealuku){
            cout<<"luku on suurempi"<<endl;
        }
        arvausmaara++;
    } while (arvaus != oikealuku);
    return arvausmaara;
}
