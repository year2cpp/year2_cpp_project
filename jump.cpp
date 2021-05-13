#include "jump.h"

void Jump::run()
{
    if(value < 0)
    {
        std::cerr << "Jump value is negative" << std::endl;
        exit(0);
    }

    if(value == ' ') 
    {
        std::cerr << "Jump value is empty" << std::endl;
        exit(0);
    } 

    glTranslatef(value,0.0,1.0); 

}

std::istream& operator>>(std::istream& in, Jump& jump)
{   
    in >> jump.value;

    if(in.fail())
    {
        std::cerr << "Jump value is an erroneous value" << std::endl;
        exit(0);
    }
    return in;
}


