#include "right.h"

//--------Teammember 3 to complete this section (class definition) ----------

//----------------------------------------------------------------------------
void Right::run()
{
    glPushMatrix();
    // reset angle , no need reset
    glRotatef(-value,0.0,0.0,1.0); // make rotate right
 
    
}

std::istream& operator>>(std::istream& in, Right& right)
{
    in >> right.value; 
    return in;
}
