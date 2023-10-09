#include <iostream>

using namespace std;

int main() {
    double x,y;
    double sum;
    char sym;

    // Заставим программу работать до тех пор пока не напишут 0.
    do {
        // Отобразить сообщение с просьбой ввести оператор или 0 для выхода.
        cout << "Insert |+| |-| |*| |/| 0 exit " << endl;
        cin >> sym;
        // Если напишет 0 тогда while(true) перестанет действовать и программа схлопнитса.
        if (sym == '0') {
            break;
        }

        // Оператор Switch для работы с разными операторами.
        switch (sym) {
            case '+':
                // Предложить пользователю ввести числа x и y для сложения.
                cout << "|+| Insert Number X and Y"<<endl;
                cin >> x;
                cin >> y;
                // Выполните сложение и отобразит сумму.
                sum = x + y;
                cout << "sum = " << sum << endl;
                break;

            case '-':
                // Предложить пользователю ввести числа x и y для вычитания.
                cout << "|-| Insert Number X and Y" << endl;
                cin >> x;
                cin >> y;
                // Проверьте, больше ли x, чем y, и выполните вычитание соответственно.
                // Используя "temp" мы временно даём y-у значение x,
                // после делаем вычисление где у temp (x) стоит значение y
                double temp;
                temp = x;
                x = y;
                y = temp;
                sum = x - y;
                cout << "sum = " << sum << endl;
                break;
            case '*':
                // Предложить пользователю ввести числа x и y для умножения.
                cout << "|*| Insert Number X and Y" << endl;
                cin >> x;
                cin >> y;
                // Выполните умножение и отобразит сумму.
                sum = x * y;
                cout << "sum = " << sum << endl;
                break;

            case '/':
                // Предложить пользователю ввести числа x и y для деления.
                cout << "|/| Insert Number X and Y" << endl;
                cin >> x;
                cin >> y;
                // Выполните деление и отобразите частное.
                sum = x / y;
                cout << "sum = " << sum << endl;
                break;
        }

    }while(true);
// конец программы если loop схлопнулся
    return 0;
}

// Part of Chraxyan Practice Work Github Archive.