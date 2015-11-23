ETAPA_2
#include <bits/stdc++.h>

using namespace std;

typedef struct{
	int tamanho;
	int regBase;
	int regLimite;
	int ID;
}processo;

typedef struct{
	int inicio;
	int fim;
	int conteudo;
}dados;

typedef struct{
int *vetor;
int tamanho;
}memoria;

memoria criarMemoria (int tamanho){
	memoria m;
	m.vetor = (int*) malloc (tamanho*sizeof(tamanho));
	m.tamanho = tamanho;
	memset ( m . vetor, 0, m.tamanho *sizeof(tamanho));
	return m;
}

void criarProcesso(processo *p, int base, int limite, int id){
	p->tamanho=p->regLimite-p->regBase;
	p->regBase=base;
	p->regLimite=limite;
	p->ID=id;
}

void apagar(processo *p){
	free (p);
	p = NULL;
}

void escreverProcessMem(memoria *m, processo *p){
	for(int i=p->regBase ; i<=p->regLimite ; i++){
		m->vetor[i]=p->ID;
	}
}

void guardarDados(memoria *m, processo *p, dados *d){
	for(int i=1 ; i <= m->tamanho ; i++){
		if(m->vetor[i] == p->ID){
			for(int j=d->inicio ; j <= d->fim ; j++){
				m->vetor[j]=d->conteudo;
			}
		}
	}
}

void retirarProcessoMem(memoria *m, processo *p){
	for(int i=p->regBase ; i<=p->regLimite ; i++){
		m->vetor[i]=0;
	}
}