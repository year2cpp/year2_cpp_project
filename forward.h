#ifndef FORWARD_H_
#define FORWARD_H_
#include "command.h" 



class Forward: public Command 
{
public:
    void run();
    friend std::istream& operator>>(std::istream& in, Forward& forward);

};

#endif /* FORWARD_H_ */
