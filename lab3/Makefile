CXX=g++
CXXFLAGS+=-Wall -O0 -g $(GXX_FLAGS)


DEP_FLAGS=-MMD

DEP_FLAGS+=-MP

SRC=$(wildcard *.cpp)
OBJ=$(SRC:.cpp=.o)
DEP=$(SRC:.cpp=.d)

CXXFLAGS+=$(DEP_FLAGS)

all: program

program: $(OBJ)
	$(CXX) $(CXXFLAGS) $(OBJ) -o $@

.PHONY: clean run

#.SILENT: clean

clean:
	@rm -f program $(OBJ) $(DEP)

run: program
	@./program
-include $(DEP)