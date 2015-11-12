#include <bits/stdc++.h>

using namespace std;

typedef struct{
	int vetor[4096];
}memoria;

void criarMem(memoria *m,int tamanho){
	for(int i=1 ; i<=tamanho ; i++){
		m->vetor[i]=0;
	}
}

void limparMem(memoria *m, int tamanho){
	for(int i=1 ; i<=tamanho ; i++){
		m->vetor[i]=0;
	}
}

void inserir(int inicio, int fim, int dado, memoria *m){
	for(int i=inicio ; i<=fim ; i++){
		m->vetor[i]=dado;
	}
}

void liberar(memoria *m){
	delete m;
}

