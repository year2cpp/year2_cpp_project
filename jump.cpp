#include "jump.h"

//--------Teammember 3 to complete this section (class definition) ----------
void Jump::run()
{
    GLfloat oldPos[2];
    GLfloat Pos[2]; // to be worked on
    oldPos[0] ;
    oldPos[1];
    glBegin(GL_LINES);  // use LINE_STRIP , lines connect but not last one
    glColor3f(0.0,1.0,1.0);// makes blank color
    glVertex2f(0.0,0.0);   // make start where previously left off
    glVertex2f(shift,0.0); // shifts 
    glEnd();
}

std::istream& operator>>(std::istream& in, Jump& jump)
{
    const int ShiftSize = 100; // e.g 5 units forward
    static char forwardd[ShiftSize];
    int shift=0;
    in.get(forwardd, ShiftSize); // gets input , stored into buffer
    shift = ShiftSize;
    return in;



}
//----------------------------------------------------------------------------

