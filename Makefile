CC=g++

GLLIB= -lglut -lGLU -lGL

SRC = $(wildcard *.cpp)
OBJ = $(SRC:.cpp=.o)

main: $(OBJ)
	 $(CC) $(OBJ) $(GLLIB) -o main

clean: 
	rm -rf $(OBJ) main


