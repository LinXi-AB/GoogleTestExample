#include <gtest/gtest.h>
#include "add.h"
#include "sub.h"

// ���� add ����
TEST(AddTest, PositiveNumbers)
{
    EXPECT_EQ(add(1, 2), 3);
    EXPECT_EQ(add(10, 5), 15);
}

TEST(AddTest, NegativeNumbers)
{
    EXPECT_EQ(add(-1, -2), -3);
    EXPECT_EQ(add(-1, 1), 0);
}

// ���� sub ����
TEST(SubTest, PositiveNumbers)
{
    EXPECT_EQ(sub(5, 3), 2);
    EXPECT_EQ(sub(10, 5), 5);
}

TEST(SubTest, NegativeNumbers)
{
    EXPECT_EQ(sub(-5, -3), -2);
    EXPECT_EQ(sub(-5, 3), -8);
}

TEST(SubTest, MixedNumbers)
{
    EXPECT_EQ(sub(5, -3), 8);
    EXPECT_EQ(sub(-5, 3), -8);
}
