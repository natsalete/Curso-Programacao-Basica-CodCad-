#include <iostream>

using namespace std;

int main(){
    int a = 0, b = 0, n, valor, la, lb;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> valor;
        if (valor == 1){
           a += 1;
        }else if (valor == 2){
           b += 1;
           a += 1;
        }
    }

    if(a % 2 == 0){
        la = 0;
    }else {
        la = 1;
    }
    if(b % 2 == 0){
        lb = 0;
    }else {
        lb = 1;
    }
    cout << la << endl << lb << endl;



}
