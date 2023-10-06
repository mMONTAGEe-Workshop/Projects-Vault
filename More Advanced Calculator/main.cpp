#include <iostream>

using namespace std;

int main() {
    float x;
    float y;
    float sum;
    char sym;

    cout<<"Insert |+| |-| |*| |/| 0 exit " <<endl;
    cin>> sym;

    switch(sym){
        case '+':
            cout<<"|+| Insert Number X and Y";
            cin>>x;
            cin>>y;
            sum = x + y;
            cout<<"sum = "<<sum <<endl;
            break;
        case '-':
            cout<<"|-| Insert Number X and Y"<<endl;
            cin>>x;
            cin>>y;
            sum = x - y;
            cout<<"sum = "<<sum<<endl;
            break;
        case '*':
            cout<<"|*| Insert Number X and Y"<<endl;
            cin>>x;
            cin>>y;
            sum = x * y;
            cout<<"sum = "<<sum<<endl;
            break;
        case '/':
            cout<<"|/| Insert Number X and Y"<<endl;
            cin>>x;
            cin>>y;
            sum = x / y;
            cout<<"sum = "<<sum<<endl;
            break;
    }

    return 0;
}
