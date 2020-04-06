// Object Oriented Programming - Challenge!



#include "Movie.h"
#include "Movies.h"
#include <iostream>

int main() {
    
    Movies collection;
    
    collection.display_movies();
    collection.add_movie("Harry Potter and the Socerer's Stone", "PG-13", 10);
    collection.add_movie("Harry Potter and the Socerer's Stone", "PG-13", 5);
    collection.increment_watched("Harry Potter and the Socerer's Stone");
    collection.increment_watched("Reign of Fire");
    collection.add_movie("How to Train Your Dragon", "PG-13", 20);
    collection.add_movie("The Avengers: Endgame", "M", 2);
    collection.display_movies();
    collection.increment_watched("The Avengers: Endgame");
    collection.display_movies();
    
    std::cout << std::endl;
    return 0;
}
