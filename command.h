#ifndef COMMAND_H_
#define COMMAND_H_

//-----------------------------------------
// Do not modify this file
//-----------------------------------------

#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>

class Command {
public:
	Command();
	virtual ~Command();
	virtual void run()=0;
protected:
	float value;
};

#endif /* COMMAND_H_ */
