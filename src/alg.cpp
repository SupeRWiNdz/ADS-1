// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
 if (value <= 1)
  return false;
 for (int i = 2; i < value; i++)
 {
  if (value % i == 0)
   return false;
 }
 return true;
}

uint64_t nPrime(uint64_t n) {
 int currentNumber = 0, primeFound = 0;
 while (primeFound < n) {
  if (checkPrime(currentNumber))
   primeFound++;
  currentNumber++;
 }
 return currentNumber - 1;
}

uint64_t nextPrime(uint64_t value) {
 int currentNumber = value + 1;
 while (checkPrime(currentNumber) == false) {
  currentNumber++;
 }
 return currentNumber;
}

uint64_t sumPrime(uint64_t hbound) {
 int sum = 0, currentPrime = 2;
 while (currentPrime < hbound) {
  sum += currentPrime;
  currentPrime = nextPrime(currentPrime);
 }
 return sum;
}
