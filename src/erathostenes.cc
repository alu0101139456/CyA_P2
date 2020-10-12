
#include "NumberPrime.hpp"
#include "PrimeVector.hpp"
#include <cstdlib>
#include <iostream>


void help() {
  system("clear");
  std::cout << "Instrucciones de uso\n";
  std::cout << "SYNTAX: \n\n  main [NUMBER] \n" << std::endl;
}


int main(int argc, char *argv[]) { 
	
	
	switch(argc) {
   case 2: {
      
      PrimeVector(atoi(argv[1]));
      break;
    }
  default:
    help();
  	break;

 }

}




}