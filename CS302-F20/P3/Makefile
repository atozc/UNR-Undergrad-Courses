
CXX = g++
CXX_FLAGS = -Wno-deprecated -std=c++14

test: BinarySearchTree.o BinaryNodeTree.o BinaryTreeInterface.o NotFoundException.o PrecondViolatedExcept.o BinaryNode.o 
	CXX -o test BinarySearchTree.o BinaryNodeTree.o BinaryTreeInterface.o NotFoundException.o PrecondViolatedExcept.o BinaryNode.o

BinarySearchTree.o: BinarySearchTree.h BinarySearchTree.cpp BinaryNodeTree.h BinaryNode.h  BinaryTreeInterface.h PrecondViolatedExcept.h NotFoundException.h 
	CXX -c BinarySearchTree.cpp 

BinaryNodeTree.o: BinaryNodeTree.h BinaryNodeTree.cpp BinaryNode.h BinaryTreeInterface.h PrecondViolatedExcept.h NotFoundException.h 
	CXX -c BinaryNodeTree.cpp

NotFoundException.o: NotFoundException.h NotFoundException.cpp 
	CXX -c NotFoundException.cpp 

PrecondViolatedExcept.o: PreconViolatedExcept.h PrecondViolatedExept.cpp
	CXX -c PrecondViolatedExcep.cpp

BinaryNode.o: BinaryNode.h BinaryNode.cpp
	CXX -c BinaryNode.cpp

clean: 
	rm *.o test