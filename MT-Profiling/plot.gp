set term pdf
set out "graph.pdf"
set xlabel "n long of matrix nxn"
set ylabel "times"
set style data linespoints
plot 'dat.txt' using 1:2 , \
    'dat.txt' using 1:3, \
    'dat.txt' using 1:4