#ifndef JUMP_H_
#define JUMP_H_

#include "command.h"

//--------Teammember 3 to complete this section (class declaration) ----------
class Jump: public Command //inherits public funcs, command.h
{
public:
    void run(); // virtual func run 
    friend std::istream& operator>>(std::istream& in, Jump& jump); //input operator
private:
    int shift;

};
//----------------------------------------------------------------------------

class Jump: public Command //inherits public funcs, command.h
{
public:
    void run(); // virtual func run 
    friend std::istream& operator>>(std::istream& in, Jump& j); //input operator


};

#endif /* JUMP_H_ */
