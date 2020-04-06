#include "Movie.h"
#include <string>
#include <iostream>

//Constructor
Movie::Movie(std::string movie_name_val, std::string movie_rating_val, unsigned int watched_val)
    :movie_name{movie_name_val}, movie_rating{movie_rating_val}, watched{watched_val}
    {
        
    }

//Copy Constructor    
Movie::Movie(const Movie &source)
    :Movie{source.movie_name, source.movie_rating, source.watched}
    {
        
    }

//Destructor    
Movie::~Movie()
{
    
}

//Display Function
void Movie::display_movie() const
{
    std::cout << "Title: " << movie_name << " Rating: " << movie_rating << " Times Watched: " << watched << std::endl;
}