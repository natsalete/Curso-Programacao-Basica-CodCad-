#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    int n;

    cin >> n;

    int v[n];

    for(int i = 0; i < n; i++){
        cin >> v[i];
    }

    sort(v, v+n);

    for(int i = 0; i < n; i++){
        if(i == n-1){
            cout << v[i] << endl;
        }else{
            cout << v[i] << " ";
        }
    }


    return 0;
}
