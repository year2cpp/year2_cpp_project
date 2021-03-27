#ifndef REPEAT_H_
#define REPEAT_H_

#include "command.h"
#include "program.h"

//--------Teammember 2 to complete this section (class declaration) ----------
class repeat {
private:
    // TODO: how do I add the program as an attribute
public:
    void run();
    friend void operator>>(istream& in);
}
//----------------------------------------------------------------------------

#endif /* REPEAT_H_ */
