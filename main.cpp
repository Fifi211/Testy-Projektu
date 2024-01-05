#include "funkcje.h"

int main() {
    TestManager testManager;
    testManager.displayTests();
    int testChoice = testManager.getTestChoice();
    testManager.runTest(testChoice);

    return 0;
}
