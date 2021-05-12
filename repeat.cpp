#include "repeat.h"

void Repeat::run(){
    for (int i = 0; i < value ; i++) {
        prog.run();
    }
}

std::istream& operator>>(std::istream& in, Repeat& rpt){
    std::string tmpInputVar;
    in >> rpt.value >> tmpInputVar;
    in >> rpt.prog;
    return in;
}
