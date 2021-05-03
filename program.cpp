#include "repeat.h"
#include "program.h"

void Program::run()
{
	//--------Teammember 1 to replace this section----------
	for (int i = 0; i < cmds.size(); i++)
	{
		cmds.at(i)->run();
	}

	//-------------------------------------------------------
}
Program::~Program(){

}

std::istream &operator>>(std::istream &in, Program &prog)
{
	//--------Teammember 1 to complete this section----------
	//Repeat repeat;
	//
	while (in.good())
	{									 //looks until next line is found.
		
		in >> prog.str;
		//in.get();						 //retrieves all the characters before the new line
		 //gets all the characters before the space and puts into prog.str
		//in >> prog.distance;//puts the rest into prog.distance.
		if (prog.str == "FORWARD")
		{
			Forward *obj = new Forward();
			in >> *obj;
			prog.cmds.push_back(obj);
		}
		else if (prog.str == "JUMP")
		{
			Jump *obj = new Jump();
			in >> *obj;
			prog.cmds.push_back(obj);
		}
		else if (prog.str == "LEFT")
		{
			Left *obj = new Left();
			in >> *obj;
			prog.cmds.push_back(obj);
		}
		else if (prog.str == "RIGHT")
		{

			Right *obj = new Right();
			
			in >> *obj;
			prog.cmds.push_back(obj);
		}
		else if (prog.str == "REPEAT")
		{
			//repeat.run();
		}
	}
	//while(in.good()){ not sure if I need this but peipei suggested it.

	//}
	return in; //returns the istream.
			   //-------------------------------------------------------
}
