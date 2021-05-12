#include "left.h"


void Left::run()
{  
    glPushMatrix();
    glRotatef(value,0.0,0.0,1.0); 
}

std::istream& operator>>(std::istream& in, Left& left) 
{
    in >> left.value; 
    return in;
}
