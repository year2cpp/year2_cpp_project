#ifndef REPEAT_H_
#define REPEAT_H_

#include "command.h"
#include "program.h"

class Repeat: public Command{
 Program prog;
public:
<<<<<<< HEAD
    void run();
    friend std::istream& operator>>(std::istream& in, Repeat& rpt);
=======
 void run();
 friend std::istream& operator>>(std::istream& in, Repeat& rpt);
>>>>>>> 4bb20596182e038d8433f2ec104426a9cf3067a9
};


#endif /* REPEAT_H_ */
