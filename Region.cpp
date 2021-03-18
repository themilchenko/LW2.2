#include <iostream>
#include "Region.h"

Region::Region(const std::string& name, const double& odd)
{
    name_of_region = name;
    odds = odd;
}

void Region::print()
{
    std::cout << "Region: " << name_of_region << ", " << "Odd: " << odds << std::endl;
}
