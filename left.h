#ifndef LEFT_H_
#define LEFT_H_

#include "command.h"

//--------Teammember 3 to complete this section (class declaration) ----------

//----------------------------------------------------------------------------
class Left: public Command //inherits public funcs, command.h
{
public:
   void run(); // virtual func run 
    friend std::istream& operator>>(std::istream& in, Left& l); //input operator
    /*
    //int *rotate;
    Left(); //for header
    Left::Left() // for cpp file
    {
    rotate=new int[2]; //gives rotate mem size of 2
   *rotate=0 ;  // makes the mem= 0
    */

private:
    int angle;
    char direction;// gets "left" or "right"

};

#endif /* LEFT_H_ */
