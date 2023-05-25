CXX = g++
CXXFLAGS = -std=c++11
OBJ = circular_sector.o ellipse.o sort.o triangle.o main.o
SRC = circular_sector.cpp circular_sector.h ellipse.cpp ellipse.h shape.h sort.cpp sort.h triangle.cpp triangle.h main.cpp
EXE = test
all:$(EXE)

$(EXE): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $^

clean:
	rm -f $(EXE)
	rm -f $(OBJ)
	rm -rf *.gch
	