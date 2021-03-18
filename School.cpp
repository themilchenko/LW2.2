#include <iostream>
#include "School.h"

School::School(const std::string& name, const int& finances, const int& size)
{
    name_of_school = name;
    finances_on_1_teacher = finances;
    size_of_teachers = size;
}

void School::print()
{
    std::cout << "School: " << name_of_school << " Finances on 1 teacher: " << finances_on_1_teacher <<
        " Size of teachers: " << size_of_teachers << std::endl;
}

int School::finance_all_school()
{
    return size_of_teachers * finances_on_1_teacher;
}
