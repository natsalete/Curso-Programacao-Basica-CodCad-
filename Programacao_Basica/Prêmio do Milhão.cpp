#include <iostream>

using namespace std;

int main (){
     int n, i = 0, a, cont = 0, pag = 1;
     cin >> n;
     while (i != n){
        cin >> a;
        cont += a;
        if (cont < 1000000){
            pag += 1;
        }

        i += 1;
     }

        cout << pag << endl;
        
}




