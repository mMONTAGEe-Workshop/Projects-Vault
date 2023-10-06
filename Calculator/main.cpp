#include <iostream>

int main() {
    // Հայտարարում
    float num1, num2, add, sub, mul, div;
    //Նախադրված թվեր
    num1 = 25.5f; // Նախադրված առաջին թիվ
    num2 = 65.7f;  // Նախադրված երկրորդ թիվ
    // Գործողություններ այստեղ
    add = num1 + num2;
    sub = num1 - num2;
    mul = num1 * num2;
    //Պայման՝ չթույլատրված բաժանումը զրոյով
    if (num2 != 0.0f) {
        div = num1 / num2;
    } else {
        std::cerr << "Error: Division by zero" << std::endl;
        return 1;
    }
    //Ցույցադրել գործողություները
    std::cout << "Addition: " << add << std::endl;
    std::cout << "Subtraction: " << sub << std::endl;
    std::cout << "Multiplication: " << mul << std::endl;
    std::cout << "Division: " << div << std::endl;

    return 0;
}