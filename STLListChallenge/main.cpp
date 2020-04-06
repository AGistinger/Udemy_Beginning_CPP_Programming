//The Standard Template Library (STL) - List Challenge

#include "Song.h"
#include <iostream>
#include <list>
#include <string>
#include <cctype>
#include <fstream>
#include <sstream>
#include <memory>

using namespace std;

//Function Prototypes
void display_menu();
char select_option();
void execute_choice(const char &selection, const list<Song> &playlist, list<Song> &change_playlist, const Song &song, list<Song>::iterator &change_song);
void load_playlist(list<Song> &playlist);
void save_playlist(const list<Song>::iterator &song);
void display_playlist(const list<Song> &playlist, const Song &current_song);
Song get_entry(ifstream &saved_playlist);
int validate_rating(const string &temp_rating);
void play_current_song(const Song &song);
void play_first_song(list<Song> &change_playlist, list<Song>::iterator &change_song);
void play_last_song(list<Song> &change_playlist, list<Song>::iterator &change_song);
void play_next_song(list<Song> &changeplaylist, list<Song>::iterator &change_song);
void play_previous_song(list<Song> &change_playlist, list<Song>::iterator &change_song);
void add_song(list<Song> &change_playlist, list<Song>::iterator &change_song);

//Displays the Menu
void display_menu()
{
    cout << "\nF - Play First Song" << endl;
    cout << "E - Play Last Song" << endl;
    cout << "N - Play Next Song" << endl;
    cout << "P - Play Previous Song" << endl;
    cout << "A - Add and Play a New Song at current location" << endl;
    cout << "L - List the current Playlist" << endl;
    cout << "===================================================================" << endl;
    cout << "Enter a selection (Q to quit): ";
}

//Allows User to enter a Selection
char select_option()
{
    char selection {};
    cin >> selection;
    selection = toupper(selection);
    return selection;    
}

//Executes the user's choice
void execute_choice(const char &selection, const list<Song> &playlist, list<Song> &change_playlist, const Song &song, list<Song>::iterator &change_song)
{
    switch(selection)
    {
        case 'F' : { play_first_song(change_playlist, change_song); }
            break;
        case 'E' : { play_last_song(change_playlist, change_song); }
            break;
        case 'N' : { play_next_song(change_playlist, change_song); }
            break;
        case 'P' : { play_previous_song(change_playlist, change_song); }
            break;
        case 'A' : { add_song(change_playlist, change_song); }
            break;
        case 'L' : { display_playlist(playlist, song); }
            break;
        case 'Q' : { cout << "\nThanks for listening!" << endl; }
            break;
        default : { cout << "\nInvalid selection, try again." << endl; }
            break;
    }
}

//Shows what the Current Song is
void play_current_song(const Song &song)
{
    cout << "\n---Current PLaying Song---------------------------------" << endl;
    cout << song << endl;
}

//Changes the Iterator to the first song
void play_first_song(list<Song> &change_playlist, list<Song>::iterator &change_song)
{
    if(!change_playlist.empty())
    {
        change_song = change_playlist.begin();
        play_current_song(*change_song);
    }
    else
    {
        cout << "\nUnable to play song, Playlist is empty" << endl;
    }
}

//Changes the Iterator to the last song
void play_last_song(list<Song> &change_playlist, list<Song>::iterator &change_song)
{
    if(!change_playlist.empty())
    {
        change_song = change_playlist.end();
        change_song--;
        play_current_song(*change_song);
    }
    else
    {
        cout << "\nUnable to play song, Playlist is empty" << endl;
    }
}

//Plays the Next song, if the list is at the end will play the first song
void play_next_song(list<Song> &change_playlist, list<Song>::iterator &change_song)
{
    if(!change_playlist.empty())
    {
        if(*change_song == change_playlist.back())
        {
            change_song = change_playlist.begin();
        }
        else
        {
            change_song++;
        }
        play_current_song(*change_song);
    }
    else
    {
        cout << "\nUnable to play Next song, your Playlist is empty" << endl;
    }
}

//Plays the Previous song, if the list is at the front will play the last song
void play_previous_song(list<Song> &change_playlist, list<Song>::iterator &change_song)
{
    if(!change_playlist.empty())
    {
        if(*change_song == change_playlist.front())
        {
            change_song = change_playlist.end();
            change_song--;
        }
        else
        {
            change_song--;
        }
        play_current_song(*change_song);
    }
    else
    {
        cout << "\nUnable to play Previous song, your Playlist is empty" << endl;
    }
}

//Add a song to the playlist at the current location
void add_song(list<Song> &change_playlist, list<Song>::iterator &change_song)
{
    string name {};
    string artist {};
    string temp_rating {};
    int rating {};
    
    cin.ignore();
    cout << "\nEnter the name of the Song you want to add: ";
    getline(cin, name);
    cout << "Enter the name of the Artist: ";
    getline(cin, artist);
    cout << "Enter the rating (1-5) of the song: ";
    cin >> temp_rating;
    
    change_playlist.emplace(change_song, name, artist, rating = validate_rating(temp_rating));
    change_song--;
    save_playlist(change_song);
    play_current_song(*change_song);
}

//Displays all the objects in the List
void display_playlist(const list<Song> &playlist, const Song &current_song)
{
    cout << "\n--Playlist-------------------------------" << endl;
    for(const Song &song : playlist)
    {
        cout << song << endl;
    }
    play_current_song(current_song);
}

//Load Saved Playlist file and add items to playlist
void load_playlist(list<Song> &change_playlist)
{
    ifstream saved_playlist {"../saved_playlist.txt"};
    if(!saved_playlist.is_open())
    {
        cerr << "File Did Not Open Properly" << endl;
    }
    
    while(!saved_playlist.eof())
    {
        change_playlist.emplace_back(get_entry(saved_playlist));
    }
    saved_playlist.close();
}

//Get Entry from file to add to playlist
Song get_entry(ifstream &saved_playlist)
{
    string name {};
    string artist {};
    string temp_rating {};
    int rating {};
    
    getline(saved_playlist, name, '/');
    getline(saved_playlist, artist, '/');
    getline(saved_playlist, temp_rating);
    
    return Song(name, artist, rating = validate_rating(temp_rating));
}

//Checks if the rating in the file is an int and returns the int
int validate_rating(const string &temp_rating)
{
    istringstream validator {temp_rating};
    shared_ptr<int> rating = make_shared<int> ();
    if(validator >> *rating)
    {
        return *rating;
    }
    else
    {
        return 1;
    }
}

//Saves the newly added item from the playlist to the saved_playlist file
void save_playlist(const list<Song>::iterator &song)
{
    ofstream saved_playlist{"../saved_playlist.txt", ios::app};
    saved_playlist << "\n" << song->get_name() << "/" << song->get_artist() << "/" << song->get_rating();
    saved_playlist.close();
}

//Main
int main()
{
    char selection {};
	list<Song> playlist {};
    
    load_playlist(playlist);
    list<Song>::iterator current_song = playlist.begin();
    
    display_playlist(playlist, *current_song);
    do
    {
        display_menu();
        selection = select_option();
        execute_choice(selection, playlist, playlist, *current_song, current_song);
    }
    while(selection != 'Q');
    
    cout << endl;
	return 0;
}