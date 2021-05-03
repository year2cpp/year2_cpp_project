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

std::istream &operator>>(std::istream &in, Program &prog)
{
	//--------Teammember 1 to complete this section----------
	Repeat repeat;

	while (in.peek() == '\n')
	{									 //looks until next line is found.
		in.get();						 //retrieves all the characters before the new line
		std::getline(in, prog.str, ' '); //gets all the characters before the space and puts into prog.str
		//in >> prog.distance;//puts the rest into prog.distance.
		if (prog.str == "FORWARD")
		{
			Command *obj = new Forward();
			
			prog.cmds.push_back(obj);
		}
		else if (prog.str == "JUMP")
		{

			Command *obj = new Jump();
			prog.cmds.push_back(obj);
		}
		else if (prog.str == "LEFT")
		{
			Command *obj = new Left();
			prog.cmds.push_back(obj);
		}
		else if (prog.str == "RIGHT")
		{

			Command *obj = new Right();
			prog.cmds.push_back(obj);
		}
		else if (prog.str == "REPEAT")
		{
			repeat.run();
		}
	}
	//while(in.good()){ not sure if I need this but peipei suggested it.

	//}
	return in; //returns the istream.
			   //-------------------------------------------------------
}
