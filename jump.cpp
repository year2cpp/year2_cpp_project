#include "jump.h"

void Jump::run()
{
    glTranslatef(value,0.0,1.0); 
}

std::istream& operator>>(std::istream& in, Jump& jump)
{   
    in >> jump.value;
    return in;
}


