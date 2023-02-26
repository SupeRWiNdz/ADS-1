// Copyright 2022 NNTU-CS
#include <cstdint>
#include "alg.h"

bool checkPrime(uint64_t value) {
 // вставьте код функции
 if (value < 2) return false;
 for (uint64_t i = 2; i < value; i++)
 {if (value % i == 0)
  return (false);}
 return (true);
}

uint64_t nPrime(uint64_t n) {
 // вставьте код функции
 uint64_t currentNumber = 0, primeFound = 0;
 while (primeFound < n)
 {if (checkPrime(currentNumber))
  primeFound++;
  currentNumber++;}
 return (currentNumber - 1);
}

uint64_t nextPrime(uint64_t value) {
 // вставьте код функции
 uint64_t currentNumber = value + 1;
 while (checkPrime(currentNumber) == false)
 currentNumber++;
 return (currentNumber);
}

uint64_t sumPrime(uint64_t hbound) {
 // вставьте код функции
 uint64_t sum = 0, currentPrime = 2;
 while (currentPrime < hbound)
 {sum += currentPrime;
 currentPrime = nextPrime(currentPrime);}
 return (sum);
}
