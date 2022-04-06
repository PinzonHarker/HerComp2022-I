graph.pdf: data.txt script.gp
	gnuplot script.gp
	evince graph.pdf &

data.txt: normalDist.x
	touch data.txt
	./normalDist.x 100 > data.txt

normalDist.x: normalDist.cpp
	g++ normalDist.cpp -o normalDist.x

clean:
	rm -rf sumupdown.pdf sumupdown.x data.txt
