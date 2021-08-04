CC=g++

all: sorting

sorting: sorttest.cpp sorting.o
	g++ -std=c++11 sorttest.cpp sorting.o -o sorting

sorting.o: sorting.cpp
	g++ -c -std=c++11 sorting.cpp

clean: rm -rf *.o sorting