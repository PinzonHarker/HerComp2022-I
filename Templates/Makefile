CXX=g++
CXXFLAGS= -g

main.x: foo.o bar.o
  $(CXX) $(CXXFLAGS) -o main.x main.cpp foo.o bar.o

.PHONY: clean
clean:
  rm -f *.o *~ *.x