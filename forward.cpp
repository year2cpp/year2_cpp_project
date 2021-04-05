#include "forward.h"
#include <string>

//--------Teammember 3 to complete this section (class definition) ----------
void Forward::run() // maybe remove this
{
    GLfloat oldPos[2];
    GLfloat Pos[2]; // to be worked on
    oldPos[0] ;
    oldPos[1];
    glBegin(GL_LINES);  // use LINE_STRIP , lines connect but not last one
    glVertex2f(0.0,0.0);   //vertex 2D (x,y), as float
    glVertex2f(shift,0.0); // e.g move 5 units
    glEnd();
    glFlush();
}

std::istream& operator>>(std::istream& in, Forward& forward) //in = user input, cin >> , e.g FORWARD 5, save into forward variables?
{ // new Forward obj, gives forward access to class
    //const int ShiftSize = 100; // e.g 5 units forward
    static char forwardd[10];
    int shift=0; //initialise shift to 0
    //Forward temp;
    //int shiftSize[100];
    in >> forwardd; // gets first word up to ws
    in >> shift;
    //in.get(shift ,)
    //in.getline(forwardd, ShiftSize, ' '); // gets i/p, stored in forwardd before ws
    //in.getline(shift, ShiftSize, ' '); // gets i/p, stored in forwardd before ws
    //Forward temp(buffer);  //new obj temp = bufer , buffer = i/p
    //forward = temp; // makes forward i/p equal temp
    return in;

    //in >> forward()
}
//----------------------------------------------------------------------------

