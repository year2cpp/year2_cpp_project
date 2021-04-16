#include "jump.h"

//--------Teammember 3 to complete this section (class definition) ----------
void Jump::run()
{
    /*float oldPos;
    float NewPos =+ distance; */
    glTranslatef(distance, 0.0,0.0);
    // translates the cursor on the screen one unit to the right from the current position
}

std::istream& operator>>(std::istream& in, Jump& jump)
{   
    static char jumpp[10];
    float distance=0.0; //initialise shift to 0
    //Forward temp;
    //int shiftSize[100];
    in >> jumpp; // gets first word up to ws
    //in.get(); // gets white space
    in >> jump.distance;
    /*
    const int ShiftSize = 100; // e.g 5 units forward
    static char forwardd[ShiftSize];
    float shift=0;
    in.get(forwardd, ShiftSize); // gets input , stored into buffer
    shift = ShiftSize; */
    return in;



}
//----------------------------------------------------------------------------

