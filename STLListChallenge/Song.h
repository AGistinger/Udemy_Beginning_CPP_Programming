#ifndef SONG_H
#define SONG_H

#include <iostream>
#include <string>

class Song
{
    friend std::ostream &operator<<(std::ostream &out, const Song &s);
private:
    std::string name;
    std::string artist;
    int rating;
public:
    Song() = default;
    Song(std::string name, std::string artist, int rating);
    
    bool operator<(const Song &rhs) const;
    bool operator==(const Song &rhs) const;
    
    std::string get_name() const;
    std::string get_artist() const;
    int get_rating() const;
    

};

#endif // SONG_H
