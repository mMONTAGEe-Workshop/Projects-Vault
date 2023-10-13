#include <iostream>

using namespace std;

int main() {
    double x,y;
    double sum;
    char sym;

    do {
        cout << "Insert |+| |-| |*| |/| 0 exit " << endl;
        cin >> sym;
        if (sym == '0') {
            break;
        }

        switch (sym) {
            case '+':
                cout << "|+| Insert Number X and Y"<<endl;
                cin >> x;
                cin >> y;
                sum = x + y;
                cout << "sum = " << sum << endl;
                break;

            case '-':
                cout << "|-| Insert Number X and Y" << endl;
                cin >> x;
                cin >> y;

                if(y > x){
                    cout<<"X must be greater than Y, or else result will be negative"<<endl;
                }
                else{
                    sum = x - y;
                    cout<< "sum = "<< sum <<endl;
                }
                break;
            case '*':
                cout << "|*| Insert Number X and Y" << endl;
                cin >> x;
                cin >> y;
                sum = x * y;
                cout << "sum = " << sum << endl;
                break;

            case '/':
                cout << "|/| Insert Number X and Y" << endl;
                cin >> x;
                cin >> y;
                sum = x / y;
                cout << "sum = " << sum << endl;
                break;
        }

    }while(true);
    return 0;
}

// Part of Chraxyan Practice Work Github Archive.