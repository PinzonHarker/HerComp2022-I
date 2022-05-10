SIZES= 2 4 8 16 32 64 128 256 512 1024
OPTIM= 0 2 3
FILE= MatrixUl.cpp
DATA= $(foreach var, $(OPTIM), dO$(var).dat )
MATRIX= $(foreach var, $(OPTIM), MatrixO$(var).x )

all: $(DATA)

graph: plot.pdf

plot.pdf: plot.gp
	gnuplot plot.gp
	evince plot.pdf

$(DATA): $(MATRIX)
	for M in $(SIZES); do \
	 echo -n "$$M    "; \
	 ./$< $$M 0 10; \
	 done \
	 > $@

$(MATRIX): $(FILE)
	for l in $(OPTIM); do \
	 echo "Compiling for Optimization $$l"; \
	 g++ -O$$l $(FILE) -o MatrixO$$l.x; \
	done

clean:
	rm *.x *.dat

# for level in 0 1 2 3; do echo "Level: $$level"; g++ -O$$level $<; ./dataO$$level.out; done
# for l in 0 3; do echo "Compiling for Optimization $l"; g++ -O$l $(FILE) -o MatrixO$l.x;  for M in 2 4 8 16 32 64 128 256; do echo -n "M    "; ./a.out $M 2 10; done > dataO$l.out; done

