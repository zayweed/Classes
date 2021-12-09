//declarations for 'music.cpp'
#ifndef MUSIC_H
#define MUSIC_H

#include <iostream>
#include <cstring>

#include "media.h"

using namespace std;

class music : public media {
    //local variables
    char musicArtist[100];
    char musicDuration[100];
    char musicPublisher[100];

public:
    music(char* title, int year, char* artist, char* duration, char* publisher); //constructer
    void print(); //print function
    //getters
    char* getArtist();
    char* getDuration();
    char* getPublisher();
    ~music(); //destructer
};

#endif