#include <iostream>
#include "School.h"
#include "Region.h"
#include "SchoolRegion.h"

int main()
{
    School school ("Lomonosovski", 50, 100);
    int size1 = school.finance_all_school();
    std::cout << "Finances for school: " << size1 << std::endl;
    school.print_school();

    Region region ("Sokolniki", 1.5);

    SchoolRegion schoolregion("Lomonosovski", 50, 100, "Sokolniki", 1.5);
    int size2 = schoolregion.get_finance_all_school();
    std::cout << "Finance for region: " << size2 << std::endl;
    schoolregion.print();


    return 0;
}
