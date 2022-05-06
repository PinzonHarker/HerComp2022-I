set term pdf
set output "plot.pdf"

set xlabel "Size of Matrix"
set ylabel "Time [s]"

set title "Optimization of matrix variations"

plot "dataO0.txt" u 1:2:3 w lp lc "red" w yerrorbars lw 2 title "No optimization",    \
    "dataO2.txt" u 1:2:3 w lp lc "green" w yerrorbars lw 2 title "-O2 flag",  \
    "dataO3.txt" u 1:2:3 w lp lc "blue" w yerrorbars lw 2 title "-O3 flag"

