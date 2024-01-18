#include "Game.h"



int main()
{

    int maksimiarvo;
    cout << "Anna arvauspelille maksimiarvo kokonaislukuna min.1:" << endl;
    cin >> maksimiarvo;
    Game arvausPeli(maksimiarvo);
    arvausPeli.play();
    return 0;
}
