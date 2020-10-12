#pragma once

#include<iostream>


class NumberPrime
 {
 private:
  int number_;
  bool prime_;

 public:
  NumberPrime();
  NumberPrime(int num, bool prime): number_(num), prime_(prime) {

  }
  NumberPrime( NumberPrime &temp);
  ~NumberPrime();

  inline bool isNumber(void) { return prime_; }


  

};

