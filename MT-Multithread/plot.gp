set term pdf
set output "plot.pdf"

set xlabel "Size of Matrix [N]"
set ylabel "Time [s]"
set logscale x 2
#set autoscale
set xrange [1 : 4096]


set title "Time of Matrix variations respect large of NxN, given No Threads"

plot "thread1.dat" u 1:2:3 w linespoints lc "red" lw 0 title "NO. Threads: 1" ,\
    "thread2.dat" u 1:2:3 w linespoints lc "green" lw 0 title "NO. Threads: 2", \
    "thread4.dat" u 1:2:3 w linespoints lc "blue" lw 0 title "NO. Threads: 4", \
    "thread6.dat" u 1:2:3 w linespoints lc "cyan" lw 0 title "NO. Threads: 6"
