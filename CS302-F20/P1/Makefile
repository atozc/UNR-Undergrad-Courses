CXX = g++
CXX_FLAGS = -Wall -std=c++11

all: test6 delimiters postfix

test6: test6.cpp Stack.h StackArray.h StackLinked.h config.h
	$(CXX) $(CXX_FLAGS) -o test6 test6.cpp 

delimiters: delimiters.cpp StackLinked.h Stack.h
	$(CXX) $(CXX_FLAGS) -o delimiters delimiters.cpp 

postfix: postfix.cpp Stack.h StackLinked.h
	$(CXX) $(CXX_FLAGS) -o postfix postfix.cpp 

test6.o: test6.cpp Stack.h StackArray.h StackLinked.h config.h
	$(CXX) $(CXX_FLAGS) -c -o StackArray.cpp StackLinked.cpp 

delimiters.o: delimiters.cpp Stack.h StackArray.h config.h
	$(CXX) $(CXX_FLAGS) -c -o StackArray.cpp 

postfix.o: postfix.cpp Stack.h StackArray.h config.h
	$(CXX) $(CXX_FLAGS) -c -o StackArray.cpp 

clean:
	rm -rf *.o test6 
	rm -rf *.o delimiters 
	rm -rf *.o postfix















