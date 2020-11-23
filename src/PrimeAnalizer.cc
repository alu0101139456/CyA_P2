#include "PrimeAnalizer.h"



PrimeAnalizer::PrimeAnalizer(int n) {
  vPrimes.resize(n);
  for (int i = 2; i <= (int)vPrimes.size(); i++) {
    vPrimes[i].setNumber(i);
  }  
}

PrimeAnalizer::~PrimeAnalizer() {
}



void PrimeAnalizer::sieve() {
  
  for (int i = 2; i < (int)vPrimes.size(); i++) {
    if( vPrimes[i].isPrime()) {
      remove(i);
    }
  }
}


void PrimeAnalizer::remove(int n) {
  for (int i = n; i < (int)vPrimes.size(); i+=n) {
    if(i != n && vPrimes[i].isPrime()) {
      vPrimes[i].resetPrime();
    }    
  }
}

void PrimeAnalizer::printList() {
  std::cout << "Numeros primos: ";
  for (int i = 2; i < (int)vPrimes.size(); i++) {
    if(vPrimes[i].isPrime())
    
      std::cout << vPrimes[i].getNumber() << ", ";
  }
  
}

