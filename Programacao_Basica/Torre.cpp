#include <iostream>

using namespace std;

int main()
{
    int N;
    cin >> N;
    int matriz[N][N];
    int linhaMatriz[N];
    int columnMatriz[N];

    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            cin >> matriz[i][j];
            if(j == 0) linhaMatriz[i] = matriz[i][j];
            else linhaMatriz[i] += matriz[i][j];
            if(i == 0) columnMatriz[j] = matriz[i][j];
            else columnMatriz[j] += matriz[i][j];

        }
    }

    int maior = 0;
    int verificaMaior;
    for (int i = 0; i < N; i++) {
        verificaMaior = 0;
        for (int j = 0; j < N; j++) {
            verificaMaior = (linhaMatriz[i]+columnMatriz[j]) - (2*matriz[i][j]);
            if(verificaMaior>maior) maior = verificaMaior;
        }
    }
    cout << maior;

    return 0;
}
