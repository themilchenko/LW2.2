#include "SchoolRegion.h"

double SchoolRegion::finance_all_school()
{
    return School::finance_all_school() * odds;
}

void SchoolRegion::print()
{
    Region::print();
    School::print();
}
