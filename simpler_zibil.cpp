#include <iostream>

int main() {
    // Declaration 
    float num1, num2, result_add, result_sub, result_mul, result_div;
    //Preset Numbers
    num1 = 25.5f; // Preset first number 
    num2 = 65.7f;  // Preset second number 
    // Operations here
    result_add = num1 + num2;
    result_sub = num1 - num2;
    result_mul = num1 * num2;
    //Condition to not allowed division by Zero
    if (num2 != 0.0f) {
        result_div = num1 / num2;
    } else {
        std::cerr << "Error: Division by zero" << std::endl;
        return 1; 
    }
    //Display Operations
    std::cout << "Addition: " << result_add << std::endl;
    std::cout << "Subtraction: " << result_sub << std::endl;
    std::cout << "Multiplication: " << result_mul << std::endl;
    std::cout << "Division: " << result_div << std::endl;

    return 0;
}
