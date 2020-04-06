#include "Song.h"
#include <iomanip>

Song::Song(std::string name, std::string artist, int rating)
    : name{name}, artist{artist}, rating{rating}
    {
        
    }
    
bool Song::operator<(const Song &rhs) const
{
    return this->name < rhs.name;
}

bool Song::operator==(const Song &rhs) const
{
    return this->name == rhs.name;
}

std::ostream &operator<<(std::ostream &out, const Song &s)
{
    out << std::setw(20) << std::left << s.name
        << std::setw(30) << std::left << s.artist
        << std::setw(2) << std::left << s.rating;
    return out;
}

std::string Song::get_name() const
{
    return name;
}

std::string Song::get_artist() const
{
    return artist;
}

int Song::get_rating() const
{
    return rating;
}
    