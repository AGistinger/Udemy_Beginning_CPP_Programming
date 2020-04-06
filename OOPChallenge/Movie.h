#ifndef _MOVIE_H_
#define _MOVIE_H_

#include <string>

class Movie
{
private:
    std::string movie_name;
    std::string movie_rating;
    unsigned int watched;
    
public:
    //Constructors
    Movie(std::string movie_name_val, std::string movie_rating_val, unsigned int watched_val);
    Movie(const Movie &source);
    ~Movie();
    
    //Functions;
    std::string get_movie_name() const {return movie_name;}
    std::string get_movie_rating() const {return movie_rating;}
    int get_watched() const {return watched;}
    
    void set_movie_name(std::string name) {movie_name = name;}
    void set_movie_rating(std::string rating) {movie_rating = rating;}
    void set_watched_count(int count) {watched = count;}
    void increment_watched() {++watched;}
    
    void display_movie() const;
};

#endif //_MOVIE_H_