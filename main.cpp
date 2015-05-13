#include <iostream>
#include "Cell_1D.h"


int main() {
    Cell_1D *test_cell = new Cell_1D();

    std::cout << "Enter seed " << test_cell->get_cell_length() << " characters long for cell ('1' is positive value)" <<
    std::endl;
    std::string seed_value;
    std::cin >> seed_value;
    seed_value = seed_value.substr(0, 10);
    test_cell->seed_cell(seed_value);

    std::cout << test_cell->get_current_grid_display() << std::endl;
    return 0;
}