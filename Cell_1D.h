//
// Created by myrovh on 5/13/15.
//

#ifndef CELL_1D_H
#define CELL_1D_H

#include <string>

class Cell_1D {
public:
    Cell_1D();

    ~Cell_1D();

    void swap_state();

    bool seed_cell(std::string seed);

    std::string get_current_grid_display();

    int get_cell_length();

private:
    static const int length;
    bool *cell_state_old;
    bool *cell_state_new;
    bool *current_state;
    bool *future_state;
    bool is_seeded;
};

#endif //CELL_1D_H
