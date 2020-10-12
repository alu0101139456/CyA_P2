#pragma once

#include<vector>
#include "NumberPrime.hpp"

class PrimeVector
{
 private:
  std::vector<NumberPrime> vPrimes;



 public:
  PrimeVector(int);
 
  PrimeVector( PrimeVector &temp);
  ~PrimeVector();

  void sieve();
  void remove(int);
  void deletePrimes();
  void printList();

};