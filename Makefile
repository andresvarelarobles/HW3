CXX = g++
CXXFLAGS    = -std=c++17 -Wall

all: HW3

clean:
     main.o HW3

HW3: User.cpp TextUI.cpp main.cpp 
    $(CXX) $(CXXFLAGS) main.cpp -o HW3


#Linear.o: Linear.cpp
#    $(CXX) $(CXXFLAGS) -c Linear.cpp

#test.o: test.cpp
#    $(CXX) $(CXXFLAGS) -c test.cpp

# main.o: main.cpp
#     $(CXX) $(CXXFLAGS) -c main.cpp