#include "repeat.h"

void Repeat::run(){

      try {
        for (int i = 0; i < value ; i++) {
            prog.run();
        }
      } catch(...) {
          std::cerr << "Error";
          exit(1);
      }
}

std::istream& operator>>(std::istream& in, Repeat& rpt){
    std::string tmpInputVar;

    try {
        in >> rpt.value >> tmpInputVar;
    } catch(...) {
        std::cerr << "Error";
    }

    try {
      in >> rpt.prog;
    } catch(...) {
        std::cerr << "Error";
    }

    return in;
}
