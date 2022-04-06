CXX = g++
OBJ = random_pdf
DAT = dataS1.o dataS2.o dataS5.o


$(OBJ).x : $(OBJ).cpp $(DAT)
	$(CXX) $< -o $@
	./$@ 1 5000 3.5 0.4 2.7 4.6 50 > dataS1.o
	./$@ 2 5000 3.5 0.4 2.7 4.6 50 > dataS2.o
	./$@ 5 5000 3.5 0.4 2.7 4.6 50 > dataS5.o
#	./.x SEED NSAMPLES MU SIGMA XMIN XMAX NBINS
	gnuplot graph.gp

$(DAT):
	touch $@

clean: 
	rm -rf *.x *.o *.png *.out *.pdf

#
#all : $(OBJ).x
#	./$(OBJ) 1 100 3.5 0.4 2.7 4.6 3
