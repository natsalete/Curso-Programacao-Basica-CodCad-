#include <iostream>

using namespace std;

int main(){
    
    int n;
   cin >> n;

   if (n == 0){
      cout << "nulo" << endl;
   }else if (n > 0){
      cout << "positivo" << endl;
   }else {
      cout << "negativo" << endl;
   }

    return 0;
}
