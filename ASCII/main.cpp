#include <iostream>

using namespace std;

int main() {
    char code;
    int x = 0;

    cout << "Please Insert Character or Type '*' to reveal ASCII and break program" << endl;

    while (true) {
        if (code == '*') {
            break;
        } else{
            cin>>code;
            x = code;
            cout<<"ASCII = "<<x<<endl;
        }
    }

    return 0;
}