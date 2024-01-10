#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    // Leitura da entrada
    int n;

    cin >> n;

    vector<int> tamanhos(n);

    for (int i = 0; i < n; ++i) {
        cin >> tamanhos[i];
    }

    // Cria uma cópia ordenada dos tamanhos originais
    vector<int> copia_tamanhos = tamanhos;
    sort(copia_tamanhos.begin(), copia_tamanhos.end());

    // Encontrar as bonecas fora de ordem
    vector<int> mistas_tamanhos;
    for (int i = 0; i < n; ++i) {
        if (tamanhos[i] != copia_tamanhos[i]) {
            mistas_tamanhos.push_back(tamanhos[i]);
        }
    }

    // Saída
    cout << mistas_tamanhos.size() << endl;

    sort(mistas_tamanhos.begin(), mistas_tamanhos.end());

    for (int i = 0; i < mistas_tamanhos.size(); ++i) {
        cout << mistas_tamanhos[i] << " ";
    }

    cout << endl;

    return 0;
}
