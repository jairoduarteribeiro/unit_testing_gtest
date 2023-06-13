#ifndef CALC_H
#define CALC_H

#include "rng.h"

class Calc {
  const RandomNumberGenerator* rng_;

 public:
  Calc(const RandomNumberGenerator* rng);
  int Sum(int a, int b) const;
  int AddRandomNumber(int a) const;
};

#endif
