#include <gtest/gtest.h>
#include "kata.h"

using namespace std;

TEST(Kata, ejemplo1)
{
    EXPECT_FALSE(Kata::ejemplo());
}

TEST(Kata, ejemplo2)
{
    EXPECT_TRUE(Kata::ejemplo());
}