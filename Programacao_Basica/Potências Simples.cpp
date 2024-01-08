#include <iostream>
#include <cmath>

using namespace std;

int main(){
    double n, x;

    cout.precision(4);
    cout.setf(ios::fixed);

    cin >> n >> x;


    cout <<  pow(n, x) << endl;

}