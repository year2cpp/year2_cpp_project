#include "forward.h"
#include <string>

struct Distances // to store all distances 
{
	float distanceSizes; // data holds value of distance sizes
	struct node * next; // node pointer
};


//--------Teammember 3 to complete this section (class definition) ----------
void Forward::run() 
{
    //changes, needs old position when forward 3x after rotate ex
    //if(forwardd == Forward;){}
   // GLfloat oldPos[2];
   // GLfloat Pos[2]; // to be worked on
    //int counter;
    /* counter++;
    distanceTravel[counter]; */
   // distanceTravel[counter] = distance;// distance travelled is first element of array 

    float oldPos;
    float NewPos;

    NewPos = distanceTravel; // already += (total travel) in the cin stream
    if(distanceTravel-distance <=0)//if -ve, set oldPos = 0
    {
        oldPos = 0.0;
    }
    else // else set to previous position
    {
        oldPos = distanceTravel-distance; 
    }
    
    glBegin(GL_LINE_LOOP);
    glVertex3f(oldPos,0.0,0.0);   //vertex 3D as float
    glVertex3f(NewPos,0.0,0.0); // e.g move 5 units
    glEnd();
    glFlush(); // send to screen

}

std::istream& operator>>(std::istream& in, Forward& forward) //in = user input, cin >> , e.g FORWARD 5, save into forward variables?
{ // new Forward obj, gives forward access to class
    //const int ShiftSize = 100; // e.g 5 units forward
    static char forwardd[10];
    static float forwardSize[10];
 
    //float distance=0.0;//initialise shift to 0 , dont need if enter class
    //Forward temp;
    //int shiftSize[100];
    in >> forwardd; // gets first word up to ws
    //in.get(); // gets white space
    in >> forward.distance;
    forward.distanceTravel+= forward.distance;

    //in.get(shift ,)
    //in.getline(forwardd, ShiftSize, ' '); // gets i/p, stored in forwardd before ws
    //in.getline(shift, ShiftSize, ' '); // gets i/p, stored in forwardd before ws
    //Forward temp(buffer);  //new obj temp = bufer , buffer = i/p
    //forward = temp; // makes forward i/p equal temp


   /* int FuncCalled;
    FuncCalled++; */
    return in;
}
//----------------------------------------------------------------------------

