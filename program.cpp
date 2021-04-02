#include "repeat.h"
#include "program.h"


void Program::run() {
	//--------Teammember 1 to replace this section----------
	if(str == "FORWARD"){
		// find number associated with the instruction, call function that number of times
		//forward();
	}
	else if (str == "LEFT"){
		//left();
	}
	else if (str == "RIGHT"){
		//right();
	}
	else if (str == "JUMP"){
		//jump();
	}
	else if (str == "REPEAT"){
		//see whats inside the brackets and perform x times
		if(str == "FORWARD"){
			//forward();
		}
		else if (str == "LEFT"){
			//left();
		}
		else if (str == "RIGHT"){
			//right();
		}
		else if (str == "JUMP"){
			//jump();
		}
	}
	else{
		std::cout << "Invalid input instruction" << std::endl;
	}
	
	//-------------------------------------------------------
	//below is prereplace with ifs and using tom and awes' parts.
	/*
	glBegin(GL_LINE_LOOP);								Draw the 3 connected vertices of a triangle
		glVertex3f( 0.0f, 1.0f, 0.0f);					Top
		glVertex3f(-1.0f,-1.0f, 0.0f);					Bottom Left
		glVertex3f( 1.0f,-1.0f, 0.0f);					Bottom Right
	glEnd();											Finished Drawing The Triangle

	glTranslatef(-2.5f,0.0f,0.0f);						Move Left 1.5 Units
	glRotatef(20,0,0,1);								Rotate by 20 degrees
	glBegin(GL_LINE_LOOP);								Draw the triangle again
		glVertex3f( 0.0f, 1.0f, 0.0f);
		glVertex3f(-1.0f,-1.0f, 0.0f);                  
		glVertex3f( 1.0f,-1.0f, 0.0f);
	glEnd();

	glRotatef(-20,0,0,1);								Rotate back again
	glTranslatef(5.0f,0.0f,0.0f);						Move Right 5 Units
	glBegin(GL_LINE_LOOP);								Draw a square
		glVertex3f(-1.0f, 1.0f, 0.0f);					Top Left
		glVertex3f( 1.0f, 1.0f, 0.0f);					Top Right
		glVertex3f( 1.0f,-1.0f, 0.0f);					Bottom Right
		glVertex3f(-1.0f,-1.0f, 0.0f);					Bottom Left
	glEnd();*/
}

std::istream& operator>>(std::istream& in, Program& prog)
{
	//--------Teammember 1 to complete this section----------
	while (in.peek() == '\n'){//looks until next line is found.
		in.get();//retrieves all the characters before the new line
	}
	std::getline(in,prog.str, ' ');//gets all the characters before the space and puts into prog.str
	in >> prog.distance;//puts the rest into prog.distance.
	return in;//returns the istream.
	//-------------------------------------------------------
}

