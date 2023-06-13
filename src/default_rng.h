#ifndef DEFAULT_RNG_H
#define DEFAULT_RNG_H

#include "rng.h"

class DefaultRandomNumberGenerator : public RandomNumberGenerator {
 public:
  int Get() const override;
};

#endif
