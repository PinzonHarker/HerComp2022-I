set term pdf
set output "plot.pdf"

set xlabel "No. of Cores [N]"
set ylabel "Time resulting"
set grid
#set logscale x 2
#set autoscale
#set xrange [1 : 4096]


set title "Times for Multiplying Matrixes respecto to N of Cores"

plot "stats.dat" u 1:2 w linespoints lc "red" lw 1 title "Speedup [S(n)]",\
     "" u 1:3 w linespoints lc "blue" lw 0 title "Parallel efficiency [E(n)]"
