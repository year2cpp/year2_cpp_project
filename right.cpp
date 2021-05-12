#include "right.h"

void Right::run()
{
    if( (-value) > 0)
    {
        std::cerr << "Right value is positive" << std::endl;
        exit(0);
    }

    glPushMatrix();
    glRotatef(-value,0.0,0.0,1.0); 
}

std::istream& operator>>(std::istream& in, Right& right)
{
    in >> right.value; 
    return in;
}
