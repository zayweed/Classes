//declarations for 'media.cpp'
#ifndef MEDIA_H
#define MEDIA_H

#include <iostream>
#include <cstring>

using namespace std;

class media {

protected:
    //local variables
    char mediaTitle[100];
    int mediaYear;

public:
    media(char* title, int year); //constructer
    virtual void print() = 0; //virtual print function
    //getters
    char* getTitle();
    int getYear();
    virtual ~media(); //destructer
};

#endif