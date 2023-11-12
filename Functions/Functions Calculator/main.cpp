#include <iostream>

using namespace std;
double gumarum(double x, double y);
double hanum(double x, double y);
double anqam(double x, double y);
double bajanac(double x, double y);

int main() {
    double num1, num2;
    double result;
    char operation;

    cout << "Enter two numbers, X and Y" << endl;
    cin >> num1 >> num2;

    cout << "Choose an Operator (+,-,*,/)" << endl;
    cin >> operation;

    switch (operation) {
        case '+':
            result = gumarum(num1, num2);
            break;
        case '-':
            result = hanum(num1, num2);
            break;
        case '*':
            result = anqam(num1, num2);
            break;
        case '/':
            result = bajanac(num1, num2);
            break;
        default:
            cout << "Invalid Operator" << endl;
            return 1;
    }
    cout<<"Result = "<<result<<endl;
}

double gumarum(double x, double y){
    return x + y;
}

double hanum(double x, double y){
    return x - y;
}

double anqam(double x, double y){
    return x * y;
}

double bajanac(double x, double y){
    if (y != 0){
        return x / y;
    } else{
        cout<<"Division by Zero is not allowed"<<endl;
        return 0;
    }
}
