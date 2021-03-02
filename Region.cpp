#include <iostream>
#include "Region.h"

Region::Region(const std::string& name_of_region, const double& odds)
{
    this->name_of_region = name_of_region;
    this->odds = odds;
}

Region::~Region()
{
    this->name_of_region = "";
    this->odds = 0;
}

void Region::print_region()
{
    std::cout << "Region: " << name_of_region << ', ' << "Odd: " << odds << std::endl;
}