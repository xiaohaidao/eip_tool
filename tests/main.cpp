// Copyright (C) 2022 dobot inc All rights reserved.
// Author: libobo@dobot.cc. Created in 202204

#include "gtest/gtest.h"

/*
 *TEST(TestSuitName, TestName) {
 *    ASSERT_TRUE(true);
 *    ASSERT_EQ(0, 0);
 *
 *}
 */

int main(int argc, char **argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}
