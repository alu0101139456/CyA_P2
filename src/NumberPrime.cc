#include "NumberPrime.h"



NumberPrime::NumberPrime(/* args */)
{
}

NumberPrime::~NumberPrime()
{
}


void NumberPrime::setNumber(int n, bool prime) {
  number_ = n;
  prime_ = prime;
}

void NumberPrime::operator=(NumberPrime &rhs) {
  number_ = rhs.number_;
  prime_ = rhs.prime_;
}



