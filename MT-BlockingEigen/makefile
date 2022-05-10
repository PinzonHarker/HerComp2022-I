all: a.out

a.out: blocking_and_eigen.cpp
	g++ -O0 blocking_and_eigen.cpp -o bl0.out
	g++ -O1 blocking_and_eigen.cpp -o bl1.out
	g++ -O2 blocking_and_eigen.cpp -o bl2.out
	g++ -O3 blocking_and_eigen.cpp -o bl3.out
	./bl0.out
	./bl1.out
	./bl2.out
	./bl3.out
