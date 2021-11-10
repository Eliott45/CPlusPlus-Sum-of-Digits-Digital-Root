// SumofDigitsDigitalRoot.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int digital_root(int n)
{
    return (int)(1 + (n - 1) % 9);
}

int main()
{
    std::cout << digital_root(16); // 7
    std::cout << std::endl;
    std::cout << digital_root(195); // 6
    std::cout << std::endl;
    std::cout << digital_root(992); // 2
    std::cout << std::endl;
    std::cout << digital_root(167346); // 9
    std::cout << std::endl;
    std::cout << digital_root(0); // 0
}

