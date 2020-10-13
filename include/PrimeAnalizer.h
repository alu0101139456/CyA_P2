#pragma once

#include<vector>
#include "NumberPrime.h"

class PrimeAnalizer
{
 private:
  std::vector<NumberPrime> vPrimes;



 public:
  PrimeAnalizer(int);
 
  ~PrimeAnalizer();

  void sieve();
  void remove(int);
  void deletePrimes();
  void printList();
 

};