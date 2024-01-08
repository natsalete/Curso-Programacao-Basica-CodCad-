#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    string gabarito;
    string opcao;

    cin >> gabarito;
    cin >> opcao;

    int cont = 0;
    for(int i = 0; i < gabarito.size(); i++){
        if(gabarito[i] == opcao[i]){
            cont++;
        }
    }

    cout << cont << endl;

    return 0;
}
