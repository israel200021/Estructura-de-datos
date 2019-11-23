
#include "cola.h"

void insertarNodo(){
	struct nodo* nuevo = (struct nodo*) malloc(sizeof(struct nodo));
	printf(" Ingrese el dato que contendra el nuevo Nodo: ");
	scanf("%d", &nuevo->dato);
	if(primero == NULL){
		primero = nuevo;
		primero->siguiente = NULL;
		ultimo = nuevo;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		ultimo = nuevo;
	}
	printf("\n Nodo ingresado con exito\n\n");
}

void buscarNodo(){
	struct nodo* actual = (struct nodo*) malloc(sizeof(struct nodo));
	actual = primero;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingrese el valor que desea Buscar: ");
	scanf("%d", &nodoBuscado);
	if(primero != NULL){
		
		while(actual != NULL && encontrado != 1){
			
			if(actual->dato == nodoBuscado){
				printf("\n Nodo con el dato ( %d ) Encontrado\n\n", nodoBuscado);
				encontrado = 1;
			}
						
			actual = actual->siguiente;
		}
		if(encontrado==0){
			printf("\n Nodo no Encontrado\n\n");
		}
	}else{
		printf("\n La cola no existe\n\n");
	}
}

void mostrarCola(){
	struct nodo* actual = (struct nodo*) malloc(sizeof(struct nodo));
	actual = primero;
	if(primero != NULL){
		
		while(actual != NULL){
			printf("\n %d", actual->dato);
			actual = actual->siguiente;
		}
	}else{
		printf("\n La cola no existe\n\n");
	}
}
