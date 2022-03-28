#include<stdio.h>
#include<stdlib.h>
#define MAX 10

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

int menu(){
	int op;
	printf("*** Estrutura de Dados I - Pilha Estatica ****\n");
	printf("1-Push (Inserir)\n");
	printf("2-Pop (Remover)\n");
	printf("3-Top (Olhar Topo)\n");
	printf("0-Sair\n");
	scanf("%d",&op);
	return op;
}
//------------------

int main(){
	tpilha p1;
	tdado x;
	int op;
	inicializa(&p1);
	do{
		op = menu();
		switch(op){
			case 1:
				printf("Dado para inserir: ");
				scanf("%d", &x);
				if(push(&p1, x) == 1){
					printf("Dado inserido!\n");
				} else {
					printf("Stack overflow :(\n");
				}
			break;
			case 2:
				if(isEmpty(p1) != 1){
					printf("dado removido: %d", pop(&p1));
				} else {
					printf("Lista vazia! Impossivel remover!");
				}
			break;
			case 3:
				mostraPilha(p1);
				printf("Topo: %d\n", p1.topo);
			break;
			case 0:
				printf("Saindo...\n");
			break;
		}
		getch();
		system("cls");	
	}while(op != 0);
}
