#ifndef LEFT_H_
#define LEFT_H_

#include "command.h"

class Left: public Command 
{
public:
   void run(); 
    friend std::istream& operator>>(std::istream& in, Left& l); 
};

#endif /* LEFT_H_ */
