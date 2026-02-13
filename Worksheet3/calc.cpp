#include "adder.h"
#include <iostream>

int main(int argc, char* argv[])
{
    int a = std::atoi(argv[1]);
    int b = std::atoi(argv[2]);
    std::cout << add(a, b) << std::endl;
    return 0;
}
