

CXX = g++
CXX_FLAGS = -Wall -std=c++03

all: proj3

proj3: proj3.cpp menu.o Agency.h
	$(CXX) $(CXX_FLAGS) -o proj3 proj3.cpp menu.o

menu.o: menu.cpp menu.hpp RentalCar.o Agency.h
	$(CXX) $(CXX_FLAGS) -c -o menu.o menu.cpp RentalCar.o

RentalCar.o: RentalCar.cpp RentalCar.hpp my_string.o Agency.h
	$(CXX) $(CXX_FLAGS) -c -o RentalCar.o RentalCar.cpp my_string.o

my_string.o: my_string.cpp my_string.hpp
	$(CXX) $(CXX_FLAGS) -c -o my_string.o my_string.cpp

clean:
	rm -rf *.o proj3

