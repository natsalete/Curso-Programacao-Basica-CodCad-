#include <iostream>
#include <cstring>
using namespace std;

int g, p, s, k;
int corrida[101][101], sistema[101], ponto[101];

int main(){

    int m;
    while(cin >> g >> p && (g || p)){
        for (int i = 0; i  <  g; ++i){
            for (int j = 0; j  <  p; ++j){
                cin >> corrida[i][j];
            }
        }

    cin >> s;

        while(s--){
            memset(ponto, 0, sizeof(ponto));
            memset(sistema, 0, sizeof(sistema));

            cin >> k;

            for (int i = 0; i  <  k; ++i){
                cin >> sistema[i];
            }

            for (int i = 0; i  <  g; ++i){
                for (int j = 0; j  <  p; ++j){
                    ponto[j] += sistema[corrida[i][j]-1];
                }
            }

            m = 0;

            for (int i = 0; i  <  p; ++i){
                if( ponto[i] > m){
                    m = ponto[i];
                }
            }

            bool f = true;
            
            
            for (int i = 0; i < p; ++i){
                if(ponto[i] == m){
                    if(f){
                        cout << i + 1;
                        f = false;
                    }else{
                        cout << i + 1;
                    }
                    cout << " ";
                }
            }

            cout << endl;
        }
    }

 return 0;
}
