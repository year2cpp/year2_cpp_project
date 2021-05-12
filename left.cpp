#include "left.h"


void Left::run()
{  
    if(value<0)
    {
        std::cerr << "Left value is negative" << std::endl;
        exit(0);
    }

    glPushMatrix();
    glRotatef(value,0.0,0.0,1.0); 
}

std::istream& operator>>(std::istream& in, Left& left) 
{
    in >> left.value; 
    return in;
}
