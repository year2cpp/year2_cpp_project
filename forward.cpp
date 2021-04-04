#include "forward.h"
<<<<<<< HEAD
=======
#include <string>
>>>>>>> 1533c1bf9e7189ebc2ac725b888e3aa0d64a0168

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
    const int ShiftSize = 100; // e.g 5 units forward
    static char forwardd[ShiftSize];
    int shift=0;
    //Forward temp;
    //int shiftSize[100];
    //in >> buffer;
    in.get(forwardd, ShiftSize); // gets input , stored into buffer
    //Forward temp(buffer);  //new obj temp = bufer , buffer = i/p
    //forward = temp; // makes forward i/p equal temp
    shift = ShiftSize;
    return in;

    //in >> forward()
}
//----------------------------------------------------------------------------

<<<<<<< HEAD
void Forward::run()
{

}


std::istream& operator>>(std::istream& in, Forward& f)
{
	//--------Teammember 1 to complete this section----------

	//-------------------------------------------------------
}
=======
>>>>>>> 1533c1bf9e7189ebc2ac725b888e3aa0d64a0168
