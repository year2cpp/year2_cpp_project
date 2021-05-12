#include "repeat.h"

//--------Teammember 2 to complete this section (class definition) ----------

void Repeat::run(){
    for (int i = 0; i < value ; i++) {
        prog.run();
    }
}

<<<<<<< HEAD
void operator>>(istream& in) {
    std::string tmpInputVar; //for square bracket in beginnging
    in >> rpt.value >> tmpInputVar;
    in >> rpt.prog;

}
=======
*/
#include "repeat.h"

void Repeat::run(){


}

std::istream& operator>>(std::istream& in, Repeat& rpt){

}
>>>>>>> 4bb20596182e038d8433f2ec104426a9cf3067a9
