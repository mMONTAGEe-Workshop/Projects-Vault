#include <iostream>

int main() {
    // Declare
    float num1, num2, result_add, result_sub, result_mul, result_div;
    num1 = 25.5f; // Preset first number as a float
    num2 = 65.7f;  // Preset second number as a float

    result_add = num1 + num2;
    result_sub = num1 - num2;
    result_mul = num1 * num2;

    if (num2 != 0.0f) {
        result_div = num1 / num2;
    } else {
        std::cerr << "Error: Division by zero" << std::endl;
        return 1; 
    }

    std::cout << "Addition: " << result_add << std::endl;
    std::cout << "Subtraction: " << result_sub << std::endl;
    std::cout << "Multiplication: " << result_mul << std::endl;
    std::cout << "Division: " << result_div << std::endl;

    return 0;
}
