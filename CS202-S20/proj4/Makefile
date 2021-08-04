CXX = g++
CXX_FLAGS = -Wall -std=c++11

TARGET = proj4
HEADERS = my_string.hpp Car.hpp Sensor.hpp Agency.hpp
SRCS = proj4.cpp Car.cpp Sensor.cpp Agency.cpp my_string.cpp

OBJECTS := $(patsubst %.cpp,%.o,$(SRCS))

.PHONY: default all clean

all: $(TARGET)

%.o: %.cpp $(HEADERS)
	$(CXX) $(CXX_FLAGS) -c $< -o $@

$(TARGET): $(OBJECTS)
	$(CXX) $(CXX_FLAGS) $(OBJECTS) $(LIBS) -o $@


clean:
	-rm -f *.o
	-rm -f $(TARGET)