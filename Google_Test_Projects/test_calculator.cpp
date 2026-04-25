#include <gtest/gtest.h>
#include "calculator.h"

TEST(CalculatorTest, AddsTwoNumbers) {
    EXPECT_EQ(add(2, 3), 5);
}

TEST(CalculatorTest, SubtractWorks) {
    EXPECT_EQ(subtract(10, 4), 6);
}