#include <iostream>

#include "School.h"
#include "Region.h"

#ifndef LW2_2_SCHOOLREGION_H
#define LW2_2_SCHOOLREGION_H

class SchoolRegion final : public School, public Region
{

public:
    SchoolRegion(const std::string& school, const int& finances, const int& size, const std::string& region,
                 const double& odd) : School(school, finances, size), Region(region, odd) { };

    double get_finance_all_school();

    void print();

};

#endif //LW2_2_SCHOOLREGION_H
