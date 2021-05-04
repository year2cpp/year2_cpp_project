#include "forward.h"
#include <string>



//--------Teammember 3 to complete this section (class definition) ----------
void Forward::run() 
{ // line loop begins where last left off
  
    
    glBegin(GL_LINE_LOOP);
    glVertex3f(0.0,0.0,0.0);   //vertex 3D as float
    glVertex3f(value,0.0,0.0); // e.g move 5 units 
    glEnd();
    glTranslatef(value,0.0,0.0); // shift cursor to the end of line loop by the value
    //glFlush(); // send to screen
    
}

std::istream& operator>>(std::istream& in, Forward& forward) //in = user input, cin >> , e.g FORWARD 5, save into forward variables?
{ // new Forward obj, gives forward access to class
      //static char forwardd[10];
    //static float forwardSize[10];
 
 
    //int shiftSize[100];
    //in >> forwardd; // gets first word up to ws
    //in.get(); // gets white space
    in >> forward.value; //using value from command file


    return in;
}
//----------------------------------------------------------------------------

