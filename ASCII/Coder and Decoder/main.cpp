#include <iostream>

using namespace std;

int main() {
    char codestuff;
    int value;
    int x = 0;

    cout<<"Please input 'c' for coding or 'd' for decoding"<<endl;
    cin>>codestuff;

    while(codestuff !='c' && codestuff != 'd') {
        cout << "Please choose between 'c' or 'd'" << endl;
        cin >> codestuff;
    }

    if(codestuff == 'c'){
        char code;
        cout<<"Please insert Character or * to exit"<<endl;
        cout<< "- ";
        cin>>code;

        while(code != '*'){
            x = code;
            cout<<"ASCII = "<< x << endl;
            cin>>code;
        }
    } else {
            cout << "Please insert ASCII value - ";
            cin >> value;
            char charvalue = static_cast<char>(value);
            cout << "Character is = " << charvalue << endl;
    }
}