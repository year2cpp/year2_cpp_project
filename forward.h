#ifndef FORWARD_H_
#define FORWARD_H_

//#include <iostream>
#include "command.h" //

//--------Teammember 3 to complete this section (class declaration) ----------


class Forward: public Command //inherits public funcs, command.h
{
public:
    void run(); // inherit virtual func run from command.h
    friend std::istream& operator>>(std::istream& in, Forward& forward); //in = cin
private:
    int shift;
    int Prev ; // prevous position

};

//----------------------------------------------------------------------------



#endif /* FORWARD_H_ */
