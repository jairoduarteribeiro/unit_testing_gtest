#include "default_rng.h"

#include <cstdlib>

int DefaultRandomNumberGenerator::Get() const { return std::rand() % 1000; }
