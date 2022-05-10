set term pdf
set output "plot.pdf"

set xlabel "Size of Matrix [N]"
set ylabel "Time [s]"
set logscale x 2
#set autoscale
set xrange [1 : 4096]


set title "Time of Matrix variations respect large of NxN, given No Threads"

plot "thread1.dat" u 1:2:3 w errorbars lc "red" lw 0 title "NO. Threads: 1" ,\
     "" u 1:2 w lines notitle, \
    "thread2.dat" u 1:2:3 w errorbars lc "green" lw 0 title "NO. Threads: 2", \
    "" u 1:2 w lines notitle,  \
    "thread4.dat" u 1:2:3 w errorbars lc "blue" lw 0 title "NO. Threads: 4", \
     "" u 1:2 w lines notitle, \
    "thread8.dat" u 1:2:3 w errorbars lc "cyan" lw 0 title "NO. Threads: 8", \
    "" u 1:2 w lines notitle
