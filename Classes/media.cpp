//media functions
#include <iostream>
#include <cstring>

#include "media.h"

using namespace std;

media::media(char* title, int year) { //constructer
    strcpy(mediaTitle, title);
    mediaYear = year;
}

//getters
char* media::getTitle() {
    return mediaTitle;
}

int media::getYear() {
    return mediaYear;
}

media::~media() { //destructer

}