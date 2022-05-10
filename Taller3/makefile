CXX = g++
FILE = fixme

all: $(FILE).cpp
	$(CXX) $^ -o $(FILE).x

debug: $(FILE).cpp
	$(CXX) -g $^ -o $(FILE).x

sanitize : $(FILE).cpp
	$(CXX) -g  $^ -fsanitize=address -o $(FILE).x
	./fixme.x
	gdb fixme.x

valgrind: $(FILE).cpp
	valgrind -s --tool=memcheck --track-origins=yes --leak-check=full ./$(FILE).x

# -fsanitize=address -fsanitize=leak -fsanitize=undefined
# undefined sirve

