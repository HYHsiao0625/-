CROSS_COMPILE=aarch64-linux-gnu-
CXX=$(CROSS_COMPILE)g++
LD=$(CROSS_COMPILE)ld
CXXFLAGS = -std=c++11
OBJ = main.o
SRC = main.cpp
EXE = lab2

all:$(OBJ)
	$(CXX) $(CXXFLAGS) -o $(EXE) $(OBJ)

$(OBJ):$(SRC)
	$(CXX) $(CXXFLAGS) -c $(SRC)

clean:
	rm -f $(EXE)
	rm -f $(OBJ)
