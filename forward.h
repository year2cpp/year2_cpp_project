#ifndef FORWARD_H_
#define FORWARD_H_

//#include <iostream>
#include "command.h" //

//--------Teammember 3 to complete this section (class declaration) ----------

//----------------------------------------------------------------------------

class Forward: public Command //inherits public funcs, command.h
{
public:
    void run(); // virtual func run 
    friend std::istream& operator>>(std::istream& in, Forward& f); //input operator


};


#endif /* FORWARD_H_ */
