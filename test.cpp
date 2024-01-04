#include "pch.h"
#include "C:\Users\a\source\repos\zadanie_1_testy_jednostkowe\zadanie_1_testy_jednostkowe\funkcje.cpp"
#include "gtest/gtest.h"

TEST(CalculatorTests, NaturalLogarithm) {
    CalculatorFunctions calculator;
    EXPECT_DOUBLE_EQ(0.0, calculator.naturalLogarithm(1.0));
    EXPECT_DOUBLE_EQ(1.6094379124341003, calculator.naturalLogarithm(5.0));
}

TEST(CalculatorTests, StandardDeviation) {
    CalculatorFunctions calculator;
    EXPECT_DOUBLE_EQ(0.0, calculator.standardDeviation(1.0, 1.0, 1.0, 1.0, 1.0));
    EXPECT_DOUBLE_EQ(1.4142135623730951, calculator.standardDeviation(1.0, 2.0, 3.0, 4.0, 5.0));
}

TEST(CalculatorTests, ExponentValue) {
    CalculatorFunctions calculator;
    EXPECT_DOUBLE_EQ(1.0, calculator.exponentValue(0.0));
    EXPECT_DOUBLE_EQ(148.4131591025766, calculator.exponentValue(5.0));
}
