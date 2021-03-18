#include <string>

#ifndef LW2_2_REGION_H
#define LW2_2_REGION_H

class Region
{
protected:

    std::string name_of_region;
    double odds;

public:

    Region() : name_of_region(""), odds(0) { };

    Region(const std::string& name_of_region, const double& odds);

    void print();

};

#endif //LW2_2_REGION_H
