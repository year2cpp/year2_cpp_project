#ifndef FORWARD_H_
#define FORWARD_H_

//#include <iostream>
#include "command.h" 

//--------Teammember 3 to complete this section (class declaration) ----------


class Forward: public Command //inherits public funcs, command.h
{
public:
    void run(); // inherit virtual func run from command.h
    friend std::istream& operator>>(std::istream& in, Forward& forward); //in = cin
   /* Forward(float distanceSize) //cons dynamic size member data, stored in heap
    { 
        Distances = new float[distanceSize];
    }
    ~Forward() // free memory
    {
        delete[] Distances;
    }

    int * Distances; */
   // int counter = 0;
    float distanceTravel; 


private:
    float distance;
    int position;
    //int FuncCalled;
};

//----------------------------------------------------------------------------



#endif /* FORWARD_H_ */
