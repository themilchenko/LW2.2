#ifndef LW2_2_SCHOOL_H
#define LW2_2_SCHOOL_H

#include <string>

class School
{
protected:

    std::string name_of_school;
    int finances_on_1_teacher; /*in hundred of rubles*/
    int size_of_teachers;

public:

    School() : name_of_school(""), finances_on_1_teacher(0), size_of_teachers(0) { };

    School(const std::string& name_of_school, const int& finances_on_1_teacher, const int& size_of_teachers);

    int finance_all_school();

    void print();

};

#endif //LW2_2_SCHOOL_H
