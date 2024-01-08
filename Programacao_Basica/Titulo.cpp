#include <iostream>
#include <algorithm>
#include <cctype>

using namespace std;

string title(string F){

    transform(F.begin(), F.end(), F.begin(), ::tolower);

     F[0] = toupper(F[0]);

	for(int i = 1; i < F.size(); i++){
        if(isblank(F[i])){
            F[i+1] = toupper(F[i+1]);
        }
	}
	return F;
}

int main(){
	string F;

	getline(cin, F);

	cout << title(F) << "\n";
}

