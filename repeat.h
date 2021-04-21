#ifndef REPEAT_H_
#define REPEAT_H_

#include "command.h"
#include "program.h"

//--------Teammember 2 to complete this section (class declaration) ----------
class Repeat {
private:
    Program prog;
public:
    void run();
    friend void operator>>(std::istream& in, Repeat& r);
};
//----------------------------------------------------------------------------

#endif /* REPEAT_H_ */
