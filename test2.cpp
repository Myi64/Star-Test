// test2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <iomanip>

int main()
{
    std::cout << "Pick Star Radius: ";
    int radius;
    std::cin >> radius;
    int maxRadius = ((radius * 2) - 1);
    std::cout << "\n\n";
    for (int i = 0; i < radius; i++)
    {
        std::cout << std::setw(maxRadius - (2 * i)) << "*";
        for (int q = 0; q < i * 2; q++)
        {
            std::cout << " *";
        }
        std::cout << "\n";
    }
    for (int i = radius - 2; i >= 0; i--)
    {
        std::cout << std::setw(maxRadius - (2 * i)) << "*";
        for (int q = 0; q < i * 2; q++)
        {
            std::cout << " *";
        }
        std::cout << "\n";
    }
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
