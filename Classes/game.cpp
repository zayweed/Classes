//game functions
#include <iostream>
#include <cstring>

#include "game.h"

using namespace std;

game::game(char* title, int year, char* publisher, int rating): media(title, year) { //constructer
    strcpy(gamePublisher, publisher);
    gameRating = rating;
}

//print function
void game::print() {
    cout << mediaTitle << endl;
    cout << mediaYear << endl;
    cout << gamePublisher << endl;
    cout << gameRating << endl;
}

//getters
char* game::getPublisher() {
    return gamePublisher;
}

int game::getRating() {
    return gameRating;
}

game::~game() { //destructer
    
}