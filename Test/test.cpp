#include "pch.h"
#include "gtest/gtest.h"
#include "C:\Users\a\source\repos\TestProjekt\TestProjekt\funkcje.h"

TEST(TestManagerTest, DisplayTests) {
    TestManager testManager;

    testing::internal::CaptureStdout();
    testManager.displayTests();
    std::string output = testing::internal::GetCapturedStdout();

    // czy output zawiera oczekiwane informacje
    EXPECT_NE(output.find("Witaj w programie testowym!"), std::string::npos);
    EXPECT_NE(output.find("1. Test 1"), std::string::npos);
    EXPECT_NE(output.find("6. Wyjscie"), std::string::npos);
}

// test funkcji getTestChoice z klasy TestManager
TEST(TestManagerTest, GetTestChoice) {
    TestManager testManager;

    // symulacja wprowadzenia odpowiednich danych przez u¿ytkownika
    std::istringstream input("1");
    std::cin.rdbuf(input.rdbuf());
    int choice = testManager.getTestChoice();

    // czy wybór u¿ytkownika zosta³ poprawnie obs³u¿ony
    EXPECT_EQ(choice, 1);
}

// testuje funkcjê runTest z klasy TestManager
TEST(TestManagerTest, RunTest) {
    TestManager testManager;

    // symulacja wprowadzenia odpowiednich danych przez u¿ytkownika (6)
    std::istringstream input("6");
    std::cin.rdbuf(input.rdbuf());

    testing::internal::CaptureStdout();
    testManager.runTest(6);
    std::string output = testing::internal::GetCapturedStdout();

    // czy output zawiera oczekiwane informacje
    EXPECT_NE(output.find("Koniec."), std::string::npos);
}

int main(int argc, char** argv) {
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}