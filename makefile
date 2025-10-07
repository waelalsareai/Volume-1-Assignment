# Makefile for Volume Assignment

CXX = g++
CXXFLAGS = -Wall -std=c++11
TARGET = volume
SRC = main.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

run: $(TARGET)
	./$(TARGET)

clean:
	rm -f $(TARGET)

