#include <iostream>
#include "School.h"
#include "Region.h"
#include "SchoolRegion.h"

int main()
{
    School school("Lomonosovski", 50, 100);
    int size1 = school.finance_all_school();
    std::cout << "Finances for school: " << size1 << std::endl;
    school.print();

    std::cout << std::endl;

    Region region("Sokolniki", 1.5);
    region.print();

    std::cout << std::endl;

    SchoolRegion schoolregion("Lomonosovski", 50, 100, "Sokolniki", 1.5);
    double size3 = schoolregion.finance_all_school();
    std::cout << "Finance for region: " << size3 << std::endl;
    schoolregion.print();


    return 0;
}
