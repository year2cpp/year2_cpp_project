#include "repeat.h"

void Repeat::run(){

     if (value < 1) {
       std::cerr << "Error: number of repeats less than 1";
       exit(1);
     }

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
        exit(1);
    }

    try {
      in >> rpt.prog;
    } catch(...) {
        std::cerr << "Error";
        exit(1);
    }

    return in;
}
