#include <iostream>
using namespace std;

int main() {
    int n;

    cin >> n;

    int matriz[n][n];
    int soma_linhas[n];
    int somadalinha = 0;
    int soma;

    for (int i = 0;i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> matriz[i][j];
            somadalinha += matriz[i][j];
        }
        soma_linhas[i] = somadalinha;
        soma = soma_linhas[i];
        somadalinha = 0;
    }
    int soma_colunas[n];
    int somadacoluna = 0;
    for (int i = 0;i < n; i++) {
        for (int j = 0; j < n; j++) {
            somadacoluna += matriz[j][i];
        }
        soma_colunas[i] = somadacoluna;
        somadacoluna = 0;
    }
    int soma_dPrincipal = 0;
    for (int i = 0; i<n; i++) {
        soma_dPrincipal += matriz[i][i];
    }
    int soma_dSecundaria = 0;
    for (int i = 0; i < n; i++) {
        soma_dSecundaria += matriz[n - i -1][i];
    }
    int compararei_tudo = soma_colunas[0];
    for (int i = 0;i < n; i++) {
        if (compararei_tudo != soma_colunas[i] || compararei_tudo != soma_linhas[i]) {
            compararei_tudo = -1;
            break;
        }
    }
    if (compararei_tudo != -1 && (compararei_tudo != soma_dPrincipal || compararei_tudo != soma_dSecundaria)) {
        compararei_tudo = -1;
    }
    cout << compararei_tudo << endl;
    return 0;
}
