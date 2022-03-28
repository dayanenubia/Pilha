#include<stdio.h>
#include<stdlib.h>
#define MAX 1000

typedef int tdado;

typedef struct{
	int topo;
	tdado pilha[MAX];
}tpilha;

void inicializa(tpilha *p){
	p->topo = -1;
}

//------------------------------

int push(tpilha *p, tdado x){
	if(p-> topo == MAX - 1){ // cabo!
		return 0; // função termina AQUI!!!!!!!
	} else {
		p->topo++; //Incrementando o topo 
		p->pilha[p->topo] = x; //Inserindo o dado no vetor
		return 1;
	}
}

//-----------------------------------------------------------------

tdado pop(tpilha *p){
	tdado aux;
	aux = p->pilha[p->topo]; 
	p->topo--;
	return aux;
}

//-----------------------------

tdado peer(tpilha *p){ 
	return p->pilha[p->topo];
}

int isEmpty(tpilha p){ //É vazio
	if(p.topo == -1){
		return 1;
	} else {
		return 0;
	}
}

//------------------------------

void mostraPilha (tpilha p){
	while(p.topo != -1){
		printf("%d |", p.pilha[p.topo]); // mostra o valor do top 
		p.topo--;
	}
	printf("\n");
}

//------------------------------------------------------------------
