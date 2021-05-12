#include "forward.h"
#include <string>


void Forward::run() 
{ 
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.0,0.0,0.0);   
    glVertex3f(value,0.0,0.0); 
    glEnd();
    glTranslatef(value,0.0,0.0); 

}

std::istream& operator>>(std::istream& in, Forward& forward) 
{ 
    in >> forward.value; 
    return in;
}


