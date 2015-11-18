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
	int vetor[4096];
}memoria;

void criarMem(memoria *m,int tamanho){
	for(int i=1 ; i<=tamanho ; i++){
		m->vetor[i]=0;
	}
}

void criarProcesso(processo *p, int base, int limite, int id){
	p->tamanho=p->regLimite-p->regBase;
	p->regBase=base;
	p->regLimite=limite;
	p->ID=id;
}

void apagar(processo *p){
	free(p);
}

void escreverProcessMem(memoria *m, processo *p){
	for(int i=p->regBase ; i<=p->regLimite ; i++){
		m->vetor[i]=p->ID;
	}
}

void guardarDados(memoria *m, processo *p, dados *d){
	for(int i=1 ; i<=tamanho ; i++){
		if(m->vetor[i]===p->ID){
			for(int j=d->inicio ; j<=d->fim ; j++){
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

