#include "repeat.h"
#include "program.h"


void Program::run(){
	//--------Teammember 1 to replace this section----------
	for (int i = 0; i < cmds.size(); i++)
	{
		cmds.at(i)->run();
	}

	//-------------------------------------------------------
}

std::istream& operator>>(std::istream& in, Program& prog)
{
	//--------Teammember 1 to complete this section----------
	Repeat repeat;
	Command* left;
	Command* right;
	Command* jump;
	Command* forward;//took out new keyword and error went.
	while (in.peek() == '\n'){//looks until next line is found.
		in.get();//retrieves all the characters before the new line
		std::getline(in,prog.str, ' ');//gets all the characters before the space and puts into prog.str
		in >> prog.distance;//puts the rest into prog.distance.
		if (prog.str == "FORWARD"){
			for (int i = 0; i < prog.distance; i++)
			{
				prog.cmds.push_back(forward);
			}
		}
		else if (prog.str == "JUMP"){
			for (int i = 0; i < prog.distance; i++)
			{
				prog.cmds.push_back(jump);
		}
		}
		else if (prog.str == "LEFT"){
			for (int i = 0; i < prog.distance; i++)
			{
				prog.cmds.push_back(left);
			}
		}
		else if (prog.str == "RIGHT"){
			for (int i = 0; i < prog.distance; i++)
			{
				prog.cmds.push_back(right);
			}
		}
		else if (prog.str == "REPEAT"){
			repeat.run();
		}
	}
	//while(in.good()){ not sure if I need this but peipei suggested it.


	//}
	return in;//returns the istream.
	//-------------------------------------------------------
}
