for l in 0 3; do
    echo "Compiling for Optimization $l"
    g++ -O$l MatrixUl.cpp -o MatrixO$l.x
    for M in 2 4 8 16 32 64 128 256; do
        echo -n "$M    "
        ./MatrixO*.x $M 0 10
    done >dO0.dat
done
