source = '/Users/antoinehugounet/Documents/Scolarité/UiO/FYS3150 - Computational physics/Project 4/Hesiod/Results/E/L=40/values(temp)'

image = '/Users/antoinehugounet/Documents/Scolarité/UiO/FYS3150 - Computational physics/Project 4/Hesiod/Results/E/L=40/cv.png'

set terminal png
set output image

set title "Mean specific heat of a 40x40 lattice"

set xlabel "Temperature"
set ylabel "Specific heat"

plot source using 1:5 w l title 'Mean specific heat'