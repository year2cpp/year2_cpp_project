#include "repeat.h"

//--------Teammember 2 to complete this section (class definition) ----------

void Repeat::run(){
    for (int i = 0; i < value ; i++) {
        prog.run();
    }
}

void operator>>(istream& in) {
    std::string tmpInputVar; //for square bracket in beginnging
    in >> rpt.value >> tmpInputVar;
    in >> rpt.prog;

}
