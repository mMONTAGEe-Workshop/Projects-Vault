#include <iostream>

using namespace std;

int main(){
    int matrica[] = {1,2,3,4,5,6,7,8,9};
    int chap1 = 5;
    int chap2 = 9;

    for(int i = 0; i < chap1; ++i) {
        cout << matrica[i] << " ";
    }

    cout<<" ";

    for(int i = chap2 - 1; i >= 5; --i){
        cout<< matrica[i] << " ";
    }
}
