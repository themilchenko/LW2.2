#include <iostream>
#include "School.h"

School::School(const std::string& name_of_school, const int& finances_on_1_teacher, const int& size_of_teachers)
{
    this->name_of_school = name_of_school;
    this->finances_on_1_teacher = finances_on_1_teacher;
    this->size_of_teachers = size_of_teachers;
}

School::~School()
{
    this->name_of_school = "";
    this->finances_on_1_teacher = 0;
    this->size_of_teachers = 0;
}

void School::print_school()
{
    std::cout << "School: " << name_of_school << " Finances on 1 teacher: " << finances_on_1_teacher <<
              " Size of teachers: " << size_of_teachers << std::endl;
}

int School::finance_all_school()
{
    return this->size_of_teachers * finances_on_1_teacher;
}