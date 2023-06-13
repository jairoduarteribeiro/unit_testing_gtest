#include "calc.h"

#include <gmock/gmock.h>
#include <gtest/gtest.h>

#include "rng.h"

using namespace ::testing;

class RandomNumberGeneratorMock : public RandomNumberGenerator {
 public:
  MOCK_METHOD(int, Get, (), (const, override));
};

class CalcTestSuite : public Test {
 protected:
  RandomNumberGeneratorMock rng_;
  Calc calc_{&rng_};
};

TEST_F(CalcTestSuite, ShouldSumTwoNumbers) {
  int a{2};
  int b{3};
  int result{calc_.Sum(a, b)};
  int expected_result{5};
  EXPECT_EQ(expected_result, result);
}

TEST_F(CalcTestSuite, ShouldAddIntegerWithFakeRandomNumber) {
  EXPECT_CALL(rng_, Get()).Times(1).WillOnce(Return(3));
  int a{2};
  int result{calc_.AddRandomNumber(2)};
  int expected_result{5};
  EXPECT_EQ(expected_result, result);
}
