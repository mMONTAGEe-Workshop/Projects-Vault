#include <iostream>

using namespace std;

int main() {
    double x;
    double y;
    double sum;
    char sym;

    // Отобразить сообщение с просьбой ввести оператор или 0 для выхода.
    cout<<"Insert |+| |-| |*| |/| 0 exit " <<endl;
    cin>> sym;

    // Оператор Switch для работы с разными операторами
    switch(sym) {
        case '+':
            // Предложить пользователю ввести числа x и y для сложения.
            cout << "|+| Insert Number X and Y";
            cin >> x;
            cin >> y;
            // Выполните сложение и отобразит сумму
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
            double temp;
            temp = x;
            x = y;
            y = temp;
            sum = x - y;
            cout<<"sum = "<<sum<<endl;
            break;
        case '*':
            // Предложить пользователю ввести числа x и y для умножения.
            cout<<"|*| Insert Number X and Y"<<endl;
            cin>>x;
            cin>>y;
            // Выполните умножение и отобразит сумму
            sum = x * y;
            cout<<"sum = "<<sum<<endl;
            break;

        case '/':
            // Предложить пользователю ввести числа x и y для деления.
            cout<<"|/| Insert Number X and Y"<<endl;
            cin>>x;
            cin>>y;
            // Выполните деление и отобразите частное.
            sum = x / y;
            cout<<"sum = "<<sum<<endl;
            break;
    }

    return 0;
}
