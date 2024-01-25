#include "italianchef.h"
#include <iostream>

using namespace std;

int main()
{
    //Tehtavan osa 1
    Chef GordonRamsay("Gordon Ramsay");
    GordonRamsay.makeSalad();
    GordonRamsay.makeSoup();
    Chef AnthonyBourdain("Anthony Bourdain");
    AnthonyBourdain.makeSalad();
    AnthonyBourdain.makeSoup();

    //Tehtavan osa 2 ja 3

    Chef Jyrki("Jyrki");
    ItalianChef Mario("Mario", 250, 100);
    Jyrki.makeSalad();
    Mario.makePasta(250, 100);
    Jyrki.makeSoup();

    return 0;
}
