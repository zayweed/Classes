//music functions
#include <iostream>
#include <cstring>

#include "music.h"

using namespace std;

music::music(char* title, int year, char* artist, char* duration, char* publisher): media(title, year) { //constructer
    strcpy(musicArtist, artist);
    strcpy(musicDuration, duration);
    strcpy(musicPublisher, publisher);
}

void music::print() { //print function
    cout << mediaTitle << endl;
    cout << mediaYear << endl;
    cout << musicArtist << endl;
    cout << musicDuration << endl;
    cout << musicPublisher << endl;
}

//getters
char* music::getArtist() {
    return musicArtist;
}
char* music::getDuration() {
    return musicDuration;
}
char* music::getPublisher() {
    return musicPublisher;
}

music::~music() { //destructer
    
}