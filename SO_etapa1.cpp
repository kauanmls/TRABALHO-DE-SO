#include <bits/stdc++.h>

using namespace std;


typedef struct{
int *vetor;
int tamanho;
}memoria;

memoria criarMemoria (int tamanho){
	memoria m;
	m.vetor = (int*) malloc (tamanho* sizeof(tamanho));
	m.tamanho = tamanho;
	memset ( m.vetor, 0, m.tamanho * sizeof(tamanho));
	return m;
}

void limparMem(memoria *m){
	memset (m->vetor, 0, m->tamanho *sizeof(m->tamanho));
}

void inserir(int inicio, int fim, int dado, memoria *m){
	for(int i=inicio ; i<=fim ; i++){
		m->vetor[i]=dado;
	}
}

void liberar(memoria *m){
	free (m->vetor);
	m->vetor = NULL;
}
