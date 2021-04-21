#ifndef LEFT_H_
#define LEFT_H_

#include "command.h"

//--------Teammember 3 to complete this section (class declaration) ----------

//----------------------------------------------------------------------------
class Left: public Command //inherits public funcs, command.h
{
public:
   void run(); // virtual func run 
    friend std::istream& operator>>(std::istream& in, Left& l); //input operator


};

#endif /* LEFT_H_ */
