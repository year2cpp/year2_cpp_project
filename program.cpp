#include "repeat.h"
#include "program.h"


void Program::run(){
	//--------Teammember 1 to replace this section----------
	for (int i = 0; i < cmds.size(); i++)
	{
		cmds.at(i);
	}
	
	
	
	
	/*
	-----------------------------------------------------------------------------------
	if(str == "FORWARD"){
		// find number associated with the instruction, call function that number of times
		
	}
	else if (cmds == "LEFT"){
		
	}
	else if (str == "RIGHT"){
		
	}
	else if (str == "JUMP"){
		
	}
	else if (str == "REPEAT"){
		//see whats inside the brackets and perform x times
		if(str == "FORWARD"){
			
		}
		else if (str == "LEFT"){
			
		}
		else if (str == "RIGHT"){
			
		}
		else if (str == "JUMP"){
			
		}
	}
	else{
		std::cout << "Invalid input instruction" << std::endl;
	}*/

	//-------------------------------------------------------
}

std::istream& operator>>(std::istream& in, Program& prog)
{
	//--------Teammember 1 to complete this section----------
	Command* left = new Command;
	Command* right = new Command;
	Command* jump = new Command;
	Command* forward = new Command;
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
	}
	//while(in.good()){ not sure if I need this but peipei suggested it.


	//}
	return in;//returns the istream.
	//-------------------------------------------------------
}
