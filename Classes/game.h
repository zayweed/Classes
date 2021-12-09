//declarations for 'game.cpp'
#ifndef GAME_H
#define GAME_H

#include <iostream>
#include <cstring>

#include "media.h"

using namespace std;

class game : public media {
    //local variables
    char gamePublisher[100];
    int gameRating;

public:
    game(char* title, int year, char* publisher, int rating); //constructer
    void print(); //print function
    //getters
    char* getPublisher();
    int getRating();
    ~game(); //destructer
};

#endif