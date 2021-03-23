#ifndef PROGRAM_H_
#define PROGRAM_H_

#include <iostream>
#include <GL/gl.h>
#include <GL/glut.h>
#include <vector>

#include "left.h"
#include "right.h"
#include "forward.h"
#include "jump.h"

class Program {
public:
	void run();
	//--------Teammember 1 to complete this section (class declaration) ----------

	//----------------------------------------------------------------------------
};



std::istream& operator>>(std::istream& in, Program& prog);

#endif /* PROGRAM_H_ */
