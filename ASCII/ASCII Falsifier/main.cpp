#include <iostream>
#include <cstdlib>

using namespace std;

int main(){
    char true_var;
    int false_var = (rand() % 100 - 50);


    cout<<"Please input a Character"<<endl;
    cin>>true_var;
    cout<<"The ASCII Value is = "<<false_var<<endl;

    cout<<"Type in '*' to reveal super secret"<<endl;

    char userInput;
    cin>>userInput;

    if (userInput == '*'){
        int x = 0;
        x = true_var;
        cout<<"Real value actually is  = "<<x<<endl;
    } else {
        cout<<false_var<<endl;
    }

    return 0;

}