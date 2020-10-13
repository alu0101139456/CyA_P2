
#include "NumberPrime.h"
#include "PrimeAnalizer.h"
#include <cstdlib>
#include <iostream>


// void help() {
//   system("clear");
//   std::cout << "Instrucciones de uso\n";
//   std::cout << "SYNTAX: \n\n  main [NUMBER] \n" << std::endl;
// }


int main(void) { 
	
	
// 	switch(argc) {
//    case 2: {
      
//       PrimeVector(atoi(argv[1]));
//       break;
//     }
//   default:
//     help();
//   	break;

//  }

  PrimeAnalizer eratostenes(1000);
  eratostenes.sieve();
  eratostenes.printList();

}




