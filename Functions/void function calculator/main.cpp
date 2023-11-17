#include <iostream>

using namespace std;

void gumarum(double x, double y, double sum);
void hanum(double x, double y, double sum);
void bazmapatkum(double x, double y, double sum);
void bajanum(double x, double y, double sum);

int main(){
    double num1 , num2;
    double result;
    char operation;

    cout<<"Insert two numbers X and Y"<<endl;
    cin>>num1>>num2;

    cout<<"Insert Operation"<<endl;
    cin>>operation;

    switch(operation){
        case '+':
            gumarum(num1,num2,result);
            break;
        case '-':
            hanum(num1,num2,result);
            break;
        case '*':
            bazmapatkum(num1,num2,result);
            break;
        case '/':
            bajanum(num1,num2,result);
            break;
    }

}

void gumarum(double x, double y, double sum){
    sum = x + y;
    cout<<sum<<endl;
}

void hanum(double x, double y, double sum){
    sum = x - y;
    cout<<sum<<endl;
}

void bazmapatkum(double x, double y, double sum){
    sum = x * y;
    cout<<sum<<endl;
}

void bajanum(double x, double y, double sum){
    sum = x / y;
    cout<<sum<<endl;
}


