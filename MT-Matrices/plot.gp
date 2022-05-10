set term pdf
set output "plot.pdf"

set xlabel "Size of Matrix"
set ylabel "Time [s]"
# set logscale x 2
set autoscale
# set xrange [1 : 4096]


set title "Optimization of matrix variations"

plot "dO0.dat" u 1:2:3 w errorbars lc "red" lw 1 title "No optimization" ,\
     "" u 1:2 w lines notitle, \
    "dO2.dat" u 1:2:3 w errorbars lc "green" lw 1 title "-O2 flag", \
    "" u 1:2 w lines notitle,  \
    "dO3.dat" u 1:2:3 w errorbars lc "blue" lw 1 title "-O3 flag", \
     "" u 1:2 w lines notitle

