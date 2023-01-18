# utilise le compilo par defaut de la machine
CXX=g++
SRC=main.cpp Cercle.cpp Rectangle.cpp
#SRC=$(wildcard *.cpp)  
EXE=filerouge

CXXFLAGS+=-Wall -Wextra -MMD -g -fdiagnostics-color=auto
LDFLAGS= #-lSDL

OBJ=$(addprefix build/,$(SRC:.cpp=.o))
DEP=$(addprefix build/,$(SRC:.cpp=.d))

all: $(OBJ)
	$(CXX) -o $(EXE) $^ $(LDFLAGS)

build/%.o: %.cpp
	@mkdir -p build
	$(CXX) $(CXXFLAGS) -o $@ -c $<

clean:
	rm -rf build core *.gch

-include $(DEP)