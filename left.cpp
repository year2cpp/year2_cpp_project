#include "left.h"


void Left::run()
{  
    if(value<0)
    {
        std::cerr << "Left value is negative" << std::endl;
        exit(0);
    }

    if(value == ' ') //NULL
    {
        std::cerr << "Left value is empty" << std::endl;
        exit(0);
    } 

    glPushMatrix();
    glRotatef(value,0.0,0.0,1.0); 
}

std::istream& operator>>(std::istream& in, Left& left) 
{
    in >> left.value; 

    if(in.fail())
    {
        std::cerr << "Left value is not a float" << std::endl;
        exit(0);
    }
    return in;
}
