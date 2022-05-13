SIZE= 1000
THREAD= 1 2 3 4 5 6 #7 8 9 10 11 12
FILE= MatrixMultip
TARGET = data.dat
DATA= $(foreach var, $(THREAD), thread$(var).dat )

# all: $(DATA)
all: $(TARGET)

$(TARGET): $(FILE).x
	for T in $(THREAD); do \
		echo -n "$$T    "; \
		OMP_NUM_THREADS=$$T ./$< $(SIZE) 0 50; \
	done > $@

plot: plot.gp
	gnuplot plotStats.gp

stats: dataStats.cpp
	g++ dataStats.cpp -o dataStats.x
	./dataStats.x > stats.dat

# OMP_NUM_THREADS=4 ./$< 1024 0 100

%.x: %.cpp
	g++ -g -O3 -fopenmp $< -o $@

clean: 
	rm -rf *.dat *.pdf *~
