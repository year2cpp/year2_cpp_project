#ifndef RIGHT_H_
#define RIGHT_H_

#include "command.h"

//--------Teammember 3 to complete this section (class declaration) ----------

//----------------------------------------------------------------------------

class Right: public Command //inherits public funcs, command.h
{
public:
    void run(); // virtual func run 
    friend std::istream& operator>>(std::istream& in, Right& r); //input operator
};


#endif /* RIGHT_H_ */
