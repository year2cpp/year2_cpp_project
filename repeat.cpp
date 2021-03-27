#include "repeat.h"

//--------Teammember 2 to complete this section (class definition) ----------
void operator>>(istream& in) {
    const int max_in_size = 100;
    String input_line;
    int n_repeats;
    char program[max_in_size];

    std::getline(std::cin, input_line);
    std::sscanf(input_line, "REPEAT %d [%99s", &n_repeats, program);

    for (size_t n_repeats = 0; n_repeats < count; n_repeats++) {
        // TODO: call the program in here
    }
}

//----------------------------------------------------------------------------
