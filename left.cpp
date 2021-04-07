#include "left.h"


//--------Teammember 3 to complete this section (class definition) ----------

//----------------------------------------------------------------------------
void Left::run()
{   //glpop and push save current state, dont affect other drawings
    glPushMatrix();
    //currentAngle += angle; // sums up angles previously had , may not need
    // glRotatef(-angle,0,0,1); 
    glRotatef(-rotate,0,0,1); // make rotate left <--, negative angle
    glPopMatrix();
}

std::istream& operator>>(std::istream& in, Left& left) //obj,left type Left ,new struct for it
{
    //const int ShiftSize = 100; // e.g 5 units forward
    //static char leftt[100];
    int angle=0; //intialise angle to 0
    in >> left.direction; //i/p up to ws to direction left 
    in >> left.angle;
    left.rotate+= left.angle; // sums all angles previously
    //in.get(forwardd, ShiftSize); // gets input , stored into buffer
    return in;

}