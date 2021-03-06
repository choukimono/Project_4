source = '/Users/antoinehugounet/Documents/Scolarité/UiO/FYS3150 - Computational physics/Project 4/Hesiod/Results/B/Fonction de T/simulation'

image = '/Users/antoinehugounet/Documents/Scolarité/UiO/FYS3150 - Computational physics/Project 4/Hesiod/Results/B/Fonction de T/khi.png'

set terminal png
set output image

set title "Mean susceptibility of a 2x2 lattice"

set xlabel "Temperature"
set ylabel "Suceptibility"

plot source using 1:5 w l title 'Mean suceptibility'