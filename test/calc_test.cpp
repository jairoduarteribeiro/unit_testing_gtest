#include "calc.h"

#include <gtest/gtest.h>

class CalcTestSuite : public ::testing::Test {
 protected:
  Calc calc_;
};

TEST_F(CalcTestSuite, ShouldSumTwoNumbers) {
  int a{2};
  int b{3};
  int result{calc_.Sum(a, b)};
  int expected_result{5};
  EXPECT_EQ(expected_result, result);
}
