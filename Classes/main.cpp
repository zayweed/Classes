//Media data base of games, music, and movies that allows the user to add, delete, and search for media.
//Zayeed Saffat
//12/8/2021

#include <iostream>
#include <cstring>
#include <vector>
#include <limits>

#include "media.h"
#include "game.h"
#include "music.h"
#include "movie.h"


using namespace std;

void add(vector<media*> &media) { //method for adding
    cout << "Would you like to add a 'GAME', 'MUSIC', or 'MOVIE'?" << endl;

    char input[100];
    cin >> input;

    cout << "Enter the title:" << endl;
    char title[100];
    cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
    cin.getline(title, 100);

    cout << "Enter the year:" << endl;
    int year;
    cin >> year;

    if (strcmp(input, "GAME") == 0) {

        cout << "Enter the publisher:" << endl;
        char publisher[100];
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.getline(publisher, 100);

        cout << "Enter the rating:" << endl;
        int rating;
        cin >> rating;

        game* newGame = new game(title, year, publisher, rating);
        media.push_back(newGame);
    }

    if (strcmp(input, "MUSIC") == 0) {

        cout << "Enter the artist:" << endl;
        char artist[100];
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.getline(artist, 100);

        cout << "Enter the duration:" << endl;
        char duration[100];
        cin.getline(duration, 100);

        cout << "Enter the publisher:" << endl;
        char publisher[100];
        cin.getline(publisher, 100);

        music* newMusic = new music(title, year, artist, duration, publisher);
        media.push_back(newMusic);
    }

    if (strcmp(input, "MOVIE") == 0) {

        cout << "Enter the director:" << endl;
        char director[100];
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.getline(director, 100);

        cout << "Enter the duration:" << endl;
        char duration[100];
        cin.getline(duration, 100);

        cout << "Enter the rating:" << endl;
        int rating;
        cin >> rating;

        movie* newMovie = new movie(title, year, director, duration, rating);
        media.push_back(newMovie);
    }
}

void search(vector<media*> media) { //method for searching
    cout << "Do you want to search by 'TITLE' or by 'YEAR'?" << endl;

    char input[100];
    cin >> input;

    if (strcmp(input, "TITLE") == 0) {
        cout << "Enter the title:" << endl;

        char title[100];
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.getline(title, 100);

        for (int i = 0; i < media.size(); i++) {
            if (strcmp(media[i]->getTitle(), title) == 0) {
                media[i]->print();
            }
        }
    }

    if (strcmp(input, "YEAR") == 0) {
        cout << "Enter the year:" << endl;

        int year;
        cin >> year;

        for (int i = 0; i < media.size(); i++) {
            if (media[i]->getYear() == year) {
                media[i]->print();
            }
        }
    }
}

void del(vector<media*> &media) { //method for deleting
    cout << "Do you want to delete by 'TITLE' or by 'YEAR'?" << endl;

    char input[100];
    cin >> input;

    if (strcmp(input, "TITLE") == 0) {
        cout << "Enter the title:" << endl;

        char title[100];
        cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        cin.getline(title, 100);

        for (int i = 0; i < media.size(); i++) {
            if (strcmp(media[i]->getTitle(), title) == 0) {
                media[i]->print();

                cout << "Enter 'YES' if you want to delete this media:" << endl;
                char input[100];
                cin >> input;
                if (strcmp(input, "YES") == 0) {
                    delete media[i];
                    media.erase(media.begin()+i);
                }
            }
        }
    }

    if (strcmp(input, "YEAR") == 0) {
        cout << "Enter the year:" << endl;

        int year;
        cin >> year;

        for (int i = 0; i < media.size(); i++) {
            if (media[i]->getYear() == year) {
                media[i]->print();

                cout << "Enter 'YES' if you want to delete this media:" << endl;
                char input[100];
                cin >> input;
                if (strcmp(input, "YES") == 0) {
                    delete media[i];
                    media.erase(media.begin()+i);
                }
            }
        }
    }
}

int main() {
    vector<media*> media;
    bool playing = true;

    while (playing == true) {
        cout << "Would you like to 'ADD', 'SEARCH', 'DELETE', or 'QUIT'" << endl;

        char input[100];
        cin >> input;

        if (strcmp(input, "ADD") == 0) { //add
            add(media);
        }

        if (strcmp(input, "SEARCH") == 0) { //search
            search(media);
        }

        if (strcmp(input, "DELETE") == 0) { //delete
            del(media);
        }

        if (strcmp(input, "QUIT") == 0) { //quit
            playing = false;
        }
    }

}
