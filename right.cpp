#include "right.h"

void Right::run()
{
    glPushMatrix();
    glRotatef(-value,0.0,0.0,1.0); 
}

std::istream& operator>>(std::istream& in, Right& right)
{
    in >> right.value; 
    return in;
}
