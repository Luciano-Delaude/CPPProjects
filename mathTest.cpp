#include <gtest/gtest.h>
#include "myMathlib.cpp"

TEST(MathTestCase,MathTestSqrt9){
    ASSERT_EQ(3,mySqrt(9));
}