#ifndef REPEAT_H_
#define REPEAT_H_

#include "command.h"
#include "program.h"

class Repeat: public Command{
 Program prog;
public:
 void run();
 friend std::istream& operator>>(std::istream& in, Repeat& rpt);
};


#endif /* REPEAT_H_ */
