#include <iostream>
#include <string>
#include "lattice.hpp"
#include "functions.hpp"
#include "unit-tests.hpp"


int main(int argc, char* argv[])
{
    run_unittest(0, nullptr);
    
    std::string main_folder = "C:\Users\tetee\Desktop\UiO\FYS3150\Github\Project_4\Report\Results";
    std::string folder_1 = "C/T=1/Positive/";
    std::string folder_2 = "C/T=1/Random/";
    std::string folder_3 = "C/T=2,4/Positive/";
    std::string folder_4 = "C/T=2,4/Random/";
    
    /*
    lattice system_1(20, 1.);
    system_1.montecarlo(5E6, main_folder + folder_1, argc, argv);
    
    */
    
    lattice system_2(20, 1.);
    system_2.randomize();
    system_2.montecarlo(5E6, main_folder + folder_2, argc, argv);
    
    /*
    
    lattice system_3(20, 2.4);
    system_3.montecarlo(5E6, main_folder + folder_3, argc, argv);
    
    
    
    lattice system_4(20, 2.4);
    system_4.randomize();
    system_4.montecarlo(1E6, main_folder + folder_4, argc, argv);
    */
    
    
    return 0;
}
