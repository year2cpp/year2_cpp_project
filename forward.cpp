#include "forward.h"
#include <string>


void Forward::run() 
{ 
    //float TestFloat;

    if(value < 0)
    {
        std::cerr << "Forward value is negative" << std::endl;
        exit(0);
    }

    if(value == ' ') //NULL
    {
        std::cerr << "Forward value is empty" << std::endl;
        exit(0);
    } 

    glBegin(GL_LINE_LOOP);
    glVertex3f(0.0,0.0,0.0);   
    glVertex3f(value,0.0,0.0); 
    glEnd();
    glTranslatef(value,0.0,0.0); 

}

std::istream& operator>>(std::istream& in, Forward& forward) 
{ 
    in >> forward.value; 

    if(in.fail())
    {
        std::cerr << "Forward value is an erroneous value" << std::endl;
        exit(0);
    }

    return in;
}


