#include "repeat.h"

//--------Teammember 2 to complete this section (class definition) ----------

void run() {
    string output_line = "";
    output_line >> Prog;
}

void operator>>(istream& in) {
    const int max_in_size = 100;
    string input_line;
    int n_repeats;
    char program[max_in_size];

    getline(cin, input_line);
    sscanf(input_line, "REPEAT %d [%99s", &n_repeats, program);

    for (size_t n_repeats = 0; n_repeats < count; n_repeats++) {
        program >> prog;
    }
}
