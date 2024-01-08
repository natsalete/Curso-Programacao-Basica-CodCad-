#include <iostream>


using namespace std;

int main(){
    int n, v[10000], cont = 0;
    cin >> n;
     for (int i = 0; i < n; i++){
        cin >> v[i];

     }
     for (int i = 0; i < n; i++){
            if((i < n-2 ) and (v[i] == 1)){
              if ((v[i+1] == 0) and (v[i+2] == 0)){
                 cont += 1;

              }
           }

        }
      cout << cont << endl;
     }


