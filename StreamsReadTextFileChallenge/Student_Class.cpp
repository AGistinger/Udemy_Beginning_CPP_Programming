#include "Student_Class.h"

Student_Class::Student_Class(std::string name, std::string answers, double score)
    : name{name}, answers{answers}, score{score}
{
}

Student_Class::Student_Class(const Student_Class &source)
    : Student_Class{source.name, source.answers, source.score}
{
}
Student_Class::~Student_Class()
{
}

const std::string Student_Class::get_name()
{
    return name;
}

const std::string Student_Class::get_answers()
{
    return answers;
}

const double Student_Class::get_score()
{
    return score;
}

void Student_Class::set_name(std::string new_name)
{
    name = new_name;
}

void Student_Class::set_answers(std::string new_answers)
{
    answers = new_answers;
}

void Student_Class::set_score(double new_score)
{
    score = new_score;
}


