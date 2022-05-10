all: a.out

a.out: main_crono.cpp
	g++ main_crono.cpp funcion1.cpp funcion2.cpp funcion3.cpp
	valgrind --tool=cachegrind ./a.out 10000 10000
	
	
	
#./a.out 10000 10000


# ./a.out 10 10 > dat.txt
# ./a.out 50 50 >> dat.txt
# ./a.out 100 100 >> dat.txt
# ./a.out 500 500 >> dat.txt
# ./a.out 1000 1000 >> dat.txt
# ./a.out 5000 5000 >> dat.txt
# ./a.out 10000 10000 >> dat.txt
# ./a.out 20000 20000 >> dat.txt

clean:
	rm *.txt