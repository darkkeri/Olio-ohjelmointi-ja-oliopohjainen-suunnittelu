#include "italianchef.h"

ItalianChef::ItalianChef(string newname, int newvesi, int newjauhot) : Chef(newname)
{
    name = newname;
    vesi = newvesi;
    jauhot= newjauhot;
    cout<<"Chef "<<name<<" konstruktori"<<endl;

}

void ItalianChef::makePasta()
{
    cout<<"Chef "<<name<<" makes pasta with special recipe"<<endl;
    cout<<"Chef "<<name<<" users jauhot = "<<jauhot<<endl;
    cout<<"Chef "<<name<<" users vesi = "<<vesi<<endl;
}

string ItalianChef::getName()
{
    return name;
}

ItalianChef::~ItalianChef()
{
    cout<<"Chef "<<name<<" destruktori"<<endl;
}


