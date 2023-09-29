#include <iostream>

int main() {
    // Declaration 
    float num1, num2, add, sub, mul, div;
    //Preset Numbers
    num1 = 25.5f; // Preset first number 
    num2 = 65.7f;  // Preset second number 
    // Operations here
    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    //Condition to not allowed division by Zero
    if (num2 != 0.0f) {
        div = num1 / num2;
    } else {
        std::cerr << "Error: Division by zero" << std::endl;
        return 1; 
    }
    //Display Operations
    std::cout << "Addition: " << add << std::endl;
    std::cout << "Subtraction: " << sub << std::endl;
    std::cout << "Multiplication: " << mul << std::endl;
    std::cout << "Division: " << div << std::endl;

    return 0;
}
