#include "Game.h"



Game::Game(int x)
{
    maxNumber=x;
    cout<<"GAME CONSTRUCTOR: object initialized with 10 as a maximum value"<<endl;
}
Game::~Game(){
    cout<<"GAME DESTRUCTOR: object cleared from stack memory"<<endl;
}
void Game::play(){
    srand(time(NULL));
    randomNumber = rand() % maxNumber+1;
    do
    {
        cout<<"Give your guess between 1-"<<maxNumber<<":"<<endl;
        cin>>playerGuess;
        numOfGuesses++;

        if(randomNumber==playerGuess){
            cout<<"Your guess is right = "<<randomNumber<<endl;
        } else if(randomNumber<playerGuess){
            cout<<"Your guess is too big"<<endl;
        } else if(randomNumber>playerGuess){
            cout<<"Your guss is too small"<<endl;
        }
    } while(randomNumber != playerGuess);

    printGameResult();

}
void Game::printGameResult(){
    cout<<"You guessed the right answer = " << randomNumber << " with " << numOfGuesses << " guesses"<<endl;
}



