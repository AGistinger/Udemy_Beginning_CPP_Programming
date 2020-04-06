#ifndef _MOVIES_H_
#define _MOVIES_H_

#include "Movie.h"
#include <vector>

class Movies
{
private:
    std::vector<Movie> movies;

public:
    //Constructor
    Movies();
    ~Movies();
    
    //Functions
    void display_movies() const;
    void add_movie(std::string movie_name, std::string movie_rating, unsigned int watched);
    void increment_watched(std::string movie_name);
    bool check_title(std::string movie_name) const;

};

#endif //_MOVIES_H_