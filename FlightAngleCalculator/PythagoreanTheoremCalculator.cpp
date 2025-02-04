

#include <iostream>
#include "PythagoreanTheoremCalculator.h"
#include <cstdlib>

float PythagoreanTheorem(float a, float b)
{
    float temp = pow(a, 2) + pow(b, 2);
    float c = sqrt(temp);

    std::cout << "Side C: " << c << std::endl;

    return c;
}

float main()
{
    int choice;

    do
    {
        system("cls");
        std::cout << "~| Pythagorean Theorem Calculator |~" << std::endl;
        std::cout << std::endl;
        std::cout << "1: Calculate Pythagorean Theorem\n";
        std::cout << "2: Exit\n";
        std::cout << std::endl;
        std::cout << "Select A Menu Option: ";
        std::cin >> choice;

        switch (choice)
        {
            case 1:
                system("cls");
                std::cout << std::endl;
                std::cout << "Enter Side A: ";
                std::cin >> a;
                std::cout << "Enter Side B: ";
                std::cin >> b;
                std::cout << std::endl;

                PythagoreanTheorem(a, b);
                system("pause");
                break;

            case 2:
                system("cls");
                std::cout << "Session Terminated!" << std::endl;
                std::cout << "Thanks for using my app. See you nex time!" << std::endl;
                system("pause");
                break;

            default:
                system("cls");
                std::cout << "Invalid Selection!" << std::endl;
                system("pause");
        }
        
    }
    while (choice != 2);
    
    system("cls");
    return 2;
}
