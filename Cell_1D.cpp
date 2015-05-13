//
// Created by myrovh on 5/13/15.
//

#include "Cell_1D.h"

const int Cell_1D::length = 10;

Cell_1D::Cell_1D() {
    cell_state_new = new bool[length];
    cell_state_old = new bool[length];

    current_state = cell_state_old;
    future_state = cell_state_new;

    for (int i = 0; i < length; i++) {
        cell_state_new[i] = false;
        cell_state_old[i] = false;
    }

    is_seeded = false;
}

Cell_1D::~Cell_1D() {
    delete[] cell_state_new;
    delete[] cell_state_old;
}

void Cell_1D::swap_state() {
    bool *temp_state = current_state;
    current_state = future_state;
    future_state = temp_state;
}

std::string Cell_1D::get_current_grid_display() {
    std::string temp_line = "";
    for (int i = 0; i < length; i++) {
        if (current_state[i] == false) {
            temp_line += "-";
        }
        else if (current_state[i] == true) {
            temp_line += "+";
        }
    }
    temp_line += "\n";

    return temp_line;
}

bool Cell_1D::seed_cell(std::string seed) {
    bool is_valid_input = true;
    if (is_seeded == false && seed.length() == length) {
        for (int i = 0; i < seed.length(); i++) {
            if (seed[i] == '1') {
                current_state[i] = true;
            }
            else {
                current_state[i] = false;
            }
        }
        is_seeded = true;
    }
    else {
        is_valid_input = false;
    }
    return is_valid_input;
}

int Cell_1D::get_cell_length() { return length; }
