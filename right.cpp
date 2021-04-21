#include "right.h"

//--------Teammember 3 to complete this section (class definition) ----------

//----------------------------------------------------------------------------
void Right::run()
{
    glPushMatrix();
    //glTranslatef(distance, 0.0,0.0);
    // reset angle , no need reset
    glRotatef(-value,0.0,0.0,1.0); // make rotate right
    //glTranslatef(-distance, 0.0,0.0);

}

std::istream& operator>>(std::istream& in, Right& right)
{
 

    in >> right.value; //i/p of the angle number up to ws
    //in.get(forwardd, ShiftSize); // gets input , stored into buffer
    return in;


}
