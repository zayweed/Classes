//movie functions
#include <iostream>
#include <cstring>

#include "movie.h"

using namespace std;

movie::movie(char* title, int year, char* director, char* duration, int rating): media(title, year) { //constructer
    strcpy(movieDirector, director);
    strcpy(movieDuration, duration);
    movieRating = rating;
}

void movie::print() { //print function
    cout << mediaTitle << endl;
    cout << mediaYear << endl;
    cout << movieDirector << endl;
    cout << movieDuration << endl;
    cout << movieRating << endl;
}

//getters
char* movie::getDirector() {
    return movieDirector;
}
char* movie::getDuration() {
    return movieDuration;
}
int movie::getRating() {
    return movieRating;
}

movie::~movie() { //desctructer
    
}