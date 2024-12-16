

#include <iostream>
#include "FlightAngleCalculator.h"

int FlightAngle(int a, int b)
{
    int temp = pow(a, 2) + pow(b, 2);
    int c = sqrt(temp);

    std::cout << "Calculated Flight Angle: " << c << std::endl;

    return c;
}

int main()
{
    std::cout << "~| Flight Angle Calculator |~" << std::endl;
    std::cout << std::endl;
    std::cout << "Enter Horizontal Distance: ";
    std::cin >> a;
    std::cout << "Enter Vertical Distance: ";
    std::cin >> b;
    std::cout << std::endl;

    FlightAngle(a, b);
}
