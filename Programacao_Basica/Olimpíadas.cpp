#include <iostream>
#include <algorithm>

using namespace std;

struct pais{
  int ouro;
  int prata;
  int bronze;
  int id;
};

bool compara_paises(pais a, pais b){
    if(a.ouro != b.ouro){
        return a.ouro > b.ouro;
    }
    if(a.prata != b.prata){
        return a.prata > b.prata;
    }
    if(a.bronze != b.bronze){
        return a.bronze > b.bronze;
    }

    return a.id < b.id;
}

int main(){
    int n, m;

    cin >> n >> m;

    pais v[n];

    for(int i = 0; i < n; i++){
        v[i].ouro = 0;
        v[i].prata = 0;
        v[i].bronze= 0;
        v[i].id = i+1;
    }
    int o, p, b;
    for(int i = 0; i < m; i++){
        cin >> o >> p >> b;
        v[o-1].ouro++;
        v[p-1].prata++;
        v[b-1].bronze++;
    }

    sort(v, v+n, compara_paises);

    for(int i = 0; i < n; i++){
        cout << v[i].id << " ";
    }

    cout << endl;

    return 0;
}
