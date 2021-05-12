#ifndef RIGHT_H_
#define RIGHT_H_

#include "command.h"

class Right: public Command 
{
public:
    void run(); 
    friend std::istream& operator>>(std::istream& in, Right& r); 
};


#endif /* RIGHT_H_ */
