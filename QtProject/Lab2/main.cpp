#include <iostream>
#include "problem1.h"
#include "problem2.h"

int main()
{
    std::cout << "Good luck for this second lab" << std::endl;
    std::string text1 = "ATTACKATONCE";
    std::string text2 = "EXXEGOEXSRGI";
    int k = 4;
    int s = 5;

    std::string cesencryption(text1, k);
    std::cout << cesencryption << std::endl;

    s = s%26;
    std::string cesdecryption(text2, s);
    std::cout << cesdecryption << std::endl;

    std::string vigencryption(std::string t);
    std::string vigdecryption(std::string t);

    return 0;
}
