//DO NOT MODIFY THIS FILE
#include "window.h"
#include "program.h"

//global program object
Program prog;

void draw(void)
{
	prog.run();
}

int main ( int argc, char** argv )
{
	if(argc==1)
	{
		std::cerr<<"You must pass an input file as a commandline argument. Correct usage is:\n"
				<< argv[0] <<" infilename"<<std::endl;
		exit(1);
	}

	//read input file into program
	std::ifstream in(argv[1]);
	if(!in.good())
	{
		std::cerr<<"Failed to open file at "<<argv[1]<<std::endl;
		exit(1);
	}
	in >> prog;

	//open display window
	window w(argc,argv);
}

