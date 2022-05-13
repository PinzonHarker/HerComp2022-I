SIZES= 2 4 8 16 32 64 128 256 512 1024
THREAD= 1 2 3 4 5 6 7 8 9 10 11 12
FILE= MatrixMultip
DATA= $(foreach var, $(THREAD), thread$(var).dat )

# all: $(DATA)
all: $(FILE).x
	for T in $(THREAD); do \
		for M in $(SIZES); do \
		echo -n "$$M    "; \
		OMP_NUM_THREADS=$$T ./$< $$M 0 50; \
		done \
		> thread$$T.dat; \
	done

plot: plot.gp
	gnuplot plot.gp


# OMP_NUM_THREADS=4 ./$< 1024 0 100

%.x: %.cpp
	g++ -g -O3 -fopenmp $< -o $@

clean: 
	rm -rf *.dat *.pdf *~
