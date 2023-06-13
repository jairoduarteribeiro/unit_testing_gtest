#include "calc.h"

Calc::Calc(const RandomNumberGenerator* rng) : rng_(rng) {}

int Calc::Sum(int a, int b) const { return a + b; }

int Calc::AddRandomNumber(int a) const { return a + rng_->Get(); }
