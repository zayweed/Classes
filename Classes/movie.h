//declarations for 'movie.cpp'
#ifndef MOVIE_H
#define MOVIE_H

#include <iostream>
#include <cstring>

#include "media.h"

using namespace std;

class movie : public media {
    //local variables
    char movieDirector[100];
    char movieDuration[100];
    int movieRating;

public:
    movie(char* title, int year, char* director, char* duration, int rating); //constructer
    void print(); //print function
    //getters
    char* getDirector();
    char* getDuration();
    int getRating();
    ~movie(); //destructer
};

#endif