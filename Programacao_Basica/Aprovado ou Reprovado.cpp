#include <iostream>

using namespace std;

int main(){
   
    double n, x;
   cin >> n >> x;

   if ((n + x) / 2 >= 7){
      cout << "Aprovado" << endl;
   }else if ((n + x) / 2 >= 4){
      cout << "Recuperacao" << endl;
   }else {
      cout << "Reprovado" << endl;
   }

    return 0;
}
