CXX = g++
CXXFLAGS = -std=c++11
OBJ = lab2_advanced.o
SRC = lab2_advanced.cpp 
EXE = lab2
all:$(EXE)

$(EXE): $(OBJ)
	$(CXX) $(CXXFLAGS) -o $@ $^

$(OBJ): $(SRC)
	$(CXX) $(CXXFLAGS) -c $^

clean:
	rm -f $(EXE)
	rm -f $(OBJ)
	rm -rf *.gch