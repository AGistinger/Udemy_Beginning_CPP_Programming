#include "Movies.h"
#include "Movie.h"
#include <iostream>
#include <vector>

//Empty Constructor
Movies::Movies()
{
    
}

//Destructor
Movies::~Movies()
{
    
}

//Functions
//Function to display all the current elements in the vector
void Movies::display_movies() const
{
  std::cout << "\nList*******************************\n" << std::endl;
  if(movies.size() > 0) {
    for(const auto &movie : movies)
    {
       movie.display_movie();
    }
  }
  else
  {
      std::cout << "The List of Movies is empty" << std::endl;
  }
  std::cout << "\n***********************************" << std::endl;
}

//Adds a movie to the movies vector if the movie doesn't alredy exist
void Movies::add_movie(std::string movie_name, std::string movie_rating, unsigned int watched)
{
    if(check_title(movie_name) == false)
    {
       movies.emplace_back(movie_name, movie_rating, watched);
       std::cout << "\n" << movie_name << " Added" << std::endl;
    }
    else
    {
       std::cout << "\nUnable to Add New Movie Title.  This Movie Title Already Exists" << std::endl;
    }
}

//Checks to see if the movie exists and Increments the watched count for the movie by 1
void Movies::increment_watched(std::string movie_name)
{
    for(auto &movie : movies)
    {
        if(Movies::check_title(movie_name) == true)
        {
            movie.increment_watched();
        }
        else
        {
        std::cout << "\nUnable to Add to Times Watched. This Movie Title Does Not Exist" << std::endl;
        }
    }
}

//Function to determine if movie already exists and returns a bool to be added to add_movie
bool Movies::check_title(std::string movie_name) const
{
    for(const auto &movie : movies)
    {
        if(movie_name == movie.get_movie_name())
        {
            return true;
        }
    }
    
    return false;
}