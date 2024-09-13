#include <gtest/gtest.h>
#include "lib.hpp"

// Demonstrate some basic assertions.
TEST(HelloTest, BasicAssertions) {
    int a = 42;
    int b = 69;
    int c = -128;

    EXPECT_EQ(a * a , square(a));
    EXPECT_EQ(b * b , square(b));
    EXPECT_EQ(c * c , square(c));
}
