#include <iostream>

using namespace std;

int main(){
    char code;
    int x = 0;

    cout << "Please Insert Character or Type '*' to break program" << endl;

    while (true) {
        cin >> code;
        if (code == '*') {
            break;
        } else{
            x = code;
            int x = x + (rand() % 100 - 50);
            cout<<"ASCII = "<<x<<endl;
        }
    }
    return 0;
}