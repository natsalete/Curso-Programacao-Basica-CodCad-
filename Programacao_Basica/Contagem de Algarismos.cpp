#include <iostream>

using namespace std;

int main(){
    int n;

    cin >> n;

    int cont_0 = 0,cont_1 = 0,cont_2 = 0,cont_3 = 0,cont_4 = 0,cont_5 = 0,cont_6 = 0,cont_7 = 0,cont_8 = 0,cont_9 = 0;

    while(n--){
        string numero;

        cin >> numero;


        for(int i = 0; i < numero.size(); i++){
            if(numero[i] == '0'){
                cont_0++;
            }else if(numero[i] == '1'){
                cont_1++;
            }else if(numero[i] == '2'){
                cont_2++;
            }else if(numero[i] == '3'){
                cont_3++;
            }else if(numero[i] == '4'){
                cont_4++;
            }else if(numero[i] == '5'){
                cont_5++;
            }else if(numero[i] == '6'){
                cont_6++;
            }else if(numero[i] == '7'){
                cont_7++;
            }else if(numero[i] == '8'){
                cont_8++;
            }else if(numero[i] == '9'){
                cont_9++;
            }
        }
    }
    cout << 0 << " - " << cont_0 << endl;
    cout << 1 << " - " << cont_1 << endl;
    cout << 2 << " - " << cont_2 << endl;
    cout << 3 << " - " << cont_3 << endl;
    cout << 4 << " - " << cont_4 << endl;
    cout << 5 << " - " << cont_5 << endl;
    cout << 6 << " - " << cont_6 << endl;
    cout << 7 << " - " << cont_7 << endl;
    cout << 8 << " - " << cont_8 << endl;
    cout << 9 << " - " << cont_9 << endl;


    return 0;
}
