#ifndef _STUDENT_CLASS_H_
#define _STUDENT_CLASS_H_

#include <string>

class Student_Class
{
private:
    std::string name;
    std::string answers;
    double score;
    
public:
    Student_Class(std::string name = "N/A", std::string answers = "EEEEE", double score = 0);
    Student_Class(const Student_Class &source);
    ~Student_Class();
    
    const std::string get_name();
    const std::string get_answers();
    const double get_score();
    void set_name(std::string new_name);
    void set_answers(std::string new_answers);
    void set_score(double new_score);

};

#endif // _STUDENT_CLASS_H_
