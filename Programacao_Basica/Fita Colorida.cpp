#include <cstdio> // scanf e printf
#include <algorithm> // min

using namespace std; // algorithm

#define MAXN 10100
#define INF 999999999

int n, fita[MAXN], esq[MAXN], dir[MAXN]; // variaveis e vetores

int main(){

	scanf("%d", &n); // leio o valor de n

	for(int i=1; i<=n; i++) scanf("%d", &fita[i]); // leio os tons da fita

	// infinito todas as distâncias
	for(int i=0; i<=n+1; i++) esq[i]=dir[i]=INF;

	// olho a distância de um zero à esquerda
	for(int i=1; i<=n; i++){

		// se o tom for zero, é zero
		if(fita[i]==0) esq[i]=0;

		// se não, é a distância do tom à esquerda mais 1
		else esq[i]=esq[i-1]+1;
	}

	// de maneira análoga, olho a distância de um zero à direita
	for(int i=n; i>0; i--){

		if(fita[i]==0) dir[i]=0;
		else dir[i]=dir[i+1]+1;
	}

	// e imprimo, para cada casa, a menor entre a distância de um zero à esquerda e um à direita
	// mas se 9 for menor que essa distância, imprima 9
	for(int i=1; i<=n; i++) printf("%d ", min(9, min(esq[i], dir[i])));

	// e imprimo a quebra de linha
	printf("\n");

	return 0;
}
