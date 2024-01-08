#include <iostream>

using namespace std;

int main(){
    char letra;

    cin >> letra;

    double x, y;

    cin >> x >> y;

    cout.precision(2);
    cout.setf(ios::fixed);

    if(letra == 'M'){
       cout << x * y << endl;
    }else if (letra == 'D'){
        cout << x / y << endl;
    }


    return 0;
}
