#include <iostream>
#include <string>
#include <stdexcept>
#include "factorial.hpp"


void printFail(std::string name)
{
    std::cout << name << ": Test failed\n";
}

void printSuccess(std::string name)
{
    std::cout << name << ": Test passed\n";
}

void test(int value, int expectedResult, bool isException)
{
    std::string testName = "Factorial of " + std::to_string(value);
    try
    {
        int result = factorial(value);
        if (isException || result != expectedResult)
            printFail(testName);
        else
            printSuccess(testName);
    }
    catch(std::invalid_argument& e)
    {
        if (isException)
            printSuccess(testName);
        else
            printFail(testName);
    }
    catch(...)
    {
        printFail(testName);
    }
}

int main()
{
    test(0, 1, true);
    test(-1, 0, true);
    test(12, 479001600, false);
    test(13, 0, true);
}