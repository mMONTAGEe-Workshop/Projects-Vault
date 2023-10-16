#include <iostream>

using namespace std;

int main() {
    double x, y;
    char operation;                 // раздел операторов

    while (true) {                                  // Начало
        cout << "Enter two numbers (X and Y): ";
        cin >> x >> y;

        cout << "Choose an operation (+, -, *, /) or 'E' to exit: ";
        cin >> operation;

        if (operation == 'E' || operation == 'e') {    			|| -> OR
            break; // Выход, если пользователь вводит «E» или «e»
        }

        double result;
        // начало проверки блока IF, идет с первого по четвертый else if и последний else по умолчанию неизвестен
        if (operation == '+') {
            result = x + y;
        }
        else if (operation == '-') {
            double temp = x;                // переключение, чтобы не было отрицательных значений
            x = y;
            y = temp;
            result = x - y;
        }
        else if (operation == '*') {
            result = x * y;
        }
        else if (operation == '/') {
            if (y != 0) {
                result = x / y;
            } else {
                cout << "Division by zero is not allowed." << endl;
                continue; // Перезапускаем цикл, если деление на ноль
            }
        }
        else {
            cout << "Unknown operator. Please enter +, -, *, /, or 'E' to exit." << endl;
        }

        cout << "Result: " << result << endl;
    }                               // конец цикла while

    return 0;
}

// Part of College Archive Github Repository