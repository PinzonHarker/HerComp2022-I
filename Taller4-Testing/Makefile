SHELL:= /bin/zsh
CXX = g++
DEPS = vector_ops.o vector_init.o

all: main.x

test: vector_test.x

vector_test.x: vector_test.o
	$(CXX) $$(pkg-config --cflags catch2) vector_test.o $(DEPS) -o vector_test.x
	./$@
	
main.x: main.o $(DEPS)
	$(CXX) -g  $^ -o $@

%.o: %.cpp
	$(CXX) $$(pkg-config --cflags catch2) -c $<

clean:
	rm -f *.o *.x