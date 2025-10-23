CXX = g++
CXXFLAGS = -std=c++17 -Wall -Wextra -pedantic
TARGET = shell
SRC = shell.cpp

all: $(TARGET)

$(TARGET): $(SRC)
	$(CXX) $(CXXFLAGS) $(SRC) -o $(TARGET)

clean:
	rm -f $(TARGET)
