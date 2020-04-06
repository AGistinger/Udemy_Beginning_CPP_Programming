// I/O and Streams - Stream Manipulators Challenge

#include  <iostream>
#include <iomanip>
#include <string>
#include <vector>

//Struct is like a class, it is public, models data, no constructors or methods - collects data together
struct City
{
   std::string name;
    long population;
    double cost;
};

//Assume each country has at least 1 city
struct Country
{
   std::string name;
    std::vector<City> cities;
};

struct Tours
{
    std::string title;
    std::vector<Country> countries;
};

//Dashes
void dashes ()
{
    std::cout << "-----------------------------------------------------------------------" << std::endl;
}

int main()
{
    Tours tours
    { "Tour Ticket Prices from Miami",
        {
            {
                "Columbia",
                {
                    {"Bogota", 8778000, 400.98},
                    {"Cali", 2401000, 424.12},
                    {"Medellin", 2464000, 350.98},
                    {"Cartagena", 972000, 345.34}
                },
            },
            {
                "Brazil",
                {
                    {"Rio De Janeiro", 13500000, 567.45},
                    {"Sao Paulo", 11310000, 975.45},
                    {"Salvador", 18234000, 855.99}
                },
            },
            {
                "Chile",
                {
                    {"Valdiva", 260000, 569.12},
                    {"Santiago", 7040000, 520}
                },
            },
            {
                "Argentina", 
                {
                    {"Buenos Aires", 3010000, 723.77}
                }
            },
        }
    };
    
    //Variables
    const int total_width {70};
    const int field1_width {20};
    const int field2_width {20};
    const int field3_width {15};
    const int field4_width {15};
    int title_width = tours.title.length();

    //Displaying Title
    std::cout <<  std::setw((total_width + title_width) / 2) << std::right << tours.title << std::endl;
    std::cout << std::endl;
    
    //Displaying Column Headers
    std::cout << std::setw(field1_width) << std::left << "Country" << std::setw(field2_width) << std::left << "City" 
    << std::setw(field3_width) << std::right << "Population" << std::setw(field4_width) << std::right << "Price" << std::endl;
    
    //Dashes
    std::cout << std::setw(total_width)
                      << std::setfill('-') << " " << std::endl;
    std::cout << std::setfill(' ');
    
    //Displaying Table
        for(auto country : tours.countries)
    {
        std::cout << std::setw(field1_width) << std:: left << country.name;
        bool first_city {true};
        for(auto city : country.cities)
        {
            if(first_city)
            {
                std::cout << std::setw(field2_width)  << std:: left << city.name << std::setw(field3_width)  
                << std::right << city.population << std::setw(field4_width) << std::right << city.cost << std::endl;
                first_city = false;
            }
            else
            {
                std::cout << std::setw(20) << " ";
                std::cout << std::setw(20)  << std:: left << city.name << std::setw(15)  << std::right << city.population 
                << std::setw(15) << std::right << std::setprecision(2)  << std::fixed<< city.cost << std::endl;
            }
        }
    }
    
     //Dashes
    std::cout << std::setw(total_width)
                      << std::setfill('-') << " " << std::endl;
    std::cout << std::setfill(' ');
    
    std::cout << std::endl << std::endl;
	return 0;
}
