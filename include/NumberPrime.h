#pragma once

#include<iostream>


class NumberPrime
 {
 private:
  int number_ = 1;
  bool prime_ = true;

 public:
  NumberPrime();
  NumberPrime(int num): number_(num){

  }


  ~NumberPrime();
  void setNumber(int n, bool prime=true);
  inline int getNumber() { return number_; }
  inline bool isPrime() { return prime_; }
  inline void resetPrime() { prime_ = false; }
  void operator=(NumberPrime &rhs);

  

};

