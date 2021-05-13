#include "repeat.h"
#include "program.h"
#include <exception>

void Program::run()
{
	for (int i = 0; i < cmds.size(); i++)
	{
		cmds.at(i)->run();
	}
}
Program::~Program(){

}

std::istream &operator>>(std::istream &in, Program &prog)
{
	if(!in.good()){
		std::cerr << "Erroneous input" << std::endl;
		exit(0);
	}
	while (in.good())
	{								
		in >> prog.str;
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
			Repeat *obj = new Repeat();
			in >> *obj;
			prog.cmds.push_back(obj);
		}
		else if (prog.str == "]"){
			break;
		}
		else{
			std::cerr << "Instruction is not amongst those used in the program" << std::endl;
			exit(0);
		}
		
	}
	return in; 
}
