#include "left.h"


//--------Teammember 3 to complete this section (class definition) ----------

//----------------------------------------------------------------------------
void Left::run()
{  
    glPushMatrix();
    //glTranslatef(distance, 0.0,0.0); //needs distance
    glRotatef(angle,0,0,1.0); // make rotate left, angle is +ve in spec
    //glTranslatef(-distance, 0.0,0.0);
    //glPopMatrix(); // maybe stop this too, as function may keep rotate
}

std::istream& operator>>(std::istream& in, Left& left) //obj left type Left ,new struct for it
{
    //const int ShiftSize = 100; // e.g 5 units forward
    //static char leftt[100];

    in >> left.direction; //i/p up to ws to direction left 
    in >> left.angle; // can use left.angle
    
    //left.rotate+= left.angle; // sums all angles previously
    //in.get(forwardd, ShiftSize); // gets input , stored into buffer
    return in;

}
