#include "calculator.h"
#include <gtest/gtest.h>

class CalculatorTest : public ::testing::Test {
protected:
    Calculator calc;

    void SetUp() override {

    }

    void TearDown() override {

    }
};

TEST_F(CalculatorTest, HandlePositiveAddition) {
    ASSERT_EQ(calc.add(1,2),3);
    ASSERT_EQ(calc.add(10,20),30);
    EXPECT_EQ(calc.add(100,200),300);
}

TEST_F(CalculatorTest, HandleZeroAddition){
    ASSERT_EQ(calc.add(0,0),0);
    ASSERT_EQ(calc.add(0,1),1);
    ASSERT_EQ(calc.add(1,0),1);
} 

TEST_F(CalculatorTest, HandleNegativeAddition){
    ASSERT_EQ(calc.add(-1,-2),-3);
    ASSERT_EQ(calc.add(-10,-20),-30);
    ASSERT_EQ(calc.add(-100,-200),-300);
    EXPECT_EQ(calc.add(-100, 500),400);
}
    
