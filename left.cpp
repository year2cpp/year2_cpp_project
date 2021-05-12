#include "left.h"


//--------Teammember 3 to complete this section (class definition) ----------

//----------------------------------------------------------------------------
void Left::run()
{  
    glPushMatrix();
    glRotatef(value,0.0,0.0,1.0); // make rotate left, angle is +ve in spec

}

std::istream& operator>>(std::istream& in, Left& left) //obj left type Left ,new struct for it
{

    in >> left.value; 
    
    return in;

}
