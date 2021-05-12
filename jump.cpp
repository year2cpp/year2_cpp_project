#include "jump.h"

//--------Teammember 3 to complete this section (class definition) ----------
void Jump::run()
{
    glTranslatef(value,0.0,1.0); // works even without drawing line
    // translates the cursor on the screen one unit to the right from the current position
}

std::istream& operator>>(std::istream& in, Jump& jump)
{   
    in >> jump.value;
    return in;
}
//----------------------------------------------------------------------------

