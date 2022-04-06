set term pdf

set title "Normal distribution"
set xlabel "Bins"
set ylabel "Frequency"

# data
mu = 3.5
sigma = 0.4

set xrange [2:5]
# set yrange [0: 0.08]
# set style data histogram

# for histogram
set output "nDist.pdf"
plot "dataS1.o" u 1:2 smooth freq w boxes lc rgb "red" notitle
    plot "dataS2.o" u 1:2 smooth freq w boxes lc rgb "blue" notitle
        plot "dataS5.o" u 1:2 smooth freq w boxes lc rgb "green" notitle


#for resulting pdf

set output "random_pdf.pdf"
set style data linespoints
# set xtics ("mu" mu , "sigma" sigma)
plot "dataS1.o" u 1:2 lc "red" lt -1 lw 0.8, \
        "dataS2.o" u 1:2 lc "blue" lt -1 lw 0.8, \
            "dataS5.o" u 1:2 lc "green" lt -1 lw 0.8