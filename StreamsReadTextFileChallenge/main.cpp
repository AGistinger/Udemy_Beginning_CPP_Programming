// I/O and Streams - Reading From a Text File Challenge

#include "Student_Class.h"
#include  <iostream>
#include <fstream>
#include <iomanip>
#include <vector>
#include <string>
#include <memory>

int main()
{
    //Variables
    std::ifstream quiz_results{"../responses.txt"};
    std::vector<std::shared_ptr<Student_Class>> class_results {};
    std::vector<std::shared_ptr<Student_Class>> class_answers {};
    std::string name {};
    std::string results {};
    bool first_item {true};
    double average_score {};
    const int width {20};
    const int total_width {40};
    
    //Open file, load correct answers into class_answers, load student answers into class_results
    if(!quiz_results.is_open())
    {
        std::cerr << "File Did Not Open Properly" << std::endl;
        return 1;
    }
    while(!quiz_results.eof())
    {
        if(first_item)
        {
            quiz_results >> results;
            std::shared_ptr<Student_Class> student= std::make_shared<Student_Class> ("Answers", results);
            class_answers.push_back(student);
            first_item = false;
        }
        else
        {
            quiz_results >> name >> results;
            std::shared_ptr<Student_Class> student = std::make_shared<Student_Class>(name, results);
            class_results.push_back(student);
        }
    }
    quiz_results.close();
    
    //Calculate score by comparing each students answers against the correct answers and adding 1 for each correct
    for(auto student : class_results)
    {
        for(unsigned int j {0}; j < results.size(); j++)
        {
            if(student->get_answers()[j] == class_answers[0]->get_answers()[j])
            {
                double new_score = student->get_score();
                student->set_score(new_score + 1);
            }
        }
    }
    
    //Calculate average of class
    for(unsigned int i {0}; i < class_results.size(); i++)
    {
        average_score+= class_results[i]->get_score();
    }
    average_score = average_score / (class_results.size());
        
    //Display information
    std::cout << std::setw(width) << std::left << "Student" << std::setw(width) << std::right << "Score" << std::endl;
    std::cout << std::setw(total_width) << std::setfill('-') << std::left << "-" <<  std::setfill(' ') << std::endl;
    for(const auto &student : class_results)
    {
        std::cout << std::setw(width) << std::left << student->get_name() << std::setw(width) << std::right << student->get_score() << std::endl;
    }
    std::cout << std::setw(total_width) << std::setfill('-') << std::left << "-" << std::setfill(' ') << std::endl;
    std::cout << std::setw(width) << std::left << "Average Score:" << std::setw(width) << std::setprecision(1) << std::fixed << std::right << average_score << std::endl;
    
    std::cout << std::endl;
	return 0;
}