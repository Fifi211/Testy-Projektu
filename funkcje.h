#pragma once
#ifndef FUNKCJE_H
#define FUNKCJE_H
#include <iostream>
#include <string>

class Test {
public:
    std::string testName;
    std::string testContent;

    Test();

    Test(std::string name, std::string content);

    void displayTest();
};

class TestManager {
private:
    Test tests[5];

public:
    TestManager();

    void displayTests();

    int getTestChoice();

    void runTest(int testChoice);
};
#endif