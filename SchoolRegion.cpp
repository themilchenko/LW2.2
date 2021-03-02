#include "SchoolRegion.h"

double SchoolRegion::get_finance_all_school()
{
    return finance_all_school() * odds;
}

void SchoolRegion::print()
{
    print_school();
    print_region();
}
