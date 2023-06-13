#include <cstdlib>
#include <ctime>
#include <iostream>

#include "calc.h"
#include "default_rng.h"

int main(int argc, char* argv[]) {
  std::srand(std::time(nullptr));
  DefaultRandomNumberGenerator rng;
  Calc calc{&rng};
  int a, b;
  std::cout << "Enter two integers: ";
  std::cin >> a >> b;
  std::cout << "Sum is " << calc.Sum(a, b) << std::endl;
  std::cout << "Enter other integer: ";
  std::cin >> a;
  std::cout << "Number plus random number [0, 1000) is "
            << calc.AddRandomNumber(a) << std::endl;
  return 0;
}
