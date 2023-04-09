#include "Math.h"
#include <iostream>

double Math::add(double num1, double num2) { return num1 + num2; }
double Math::subtract(double num1, double num2) { return num1 - num2; }
double Math::multiply(double num1, double num2) { return num1 * num2; }
double Math::divide(double num1, double num2) 
{ if (num2 != 0)
{
    return num1 / num2;
}
else
{
    std::cout << "Don't divide by zero!";
    return 0;
}
 }