
#include "listadobleligada.h"

void insertarNodo(){
	struct nodo* nuevo = (struct nodo*)malloc(sizeof(struct nodo));
	printf(" Ingrese el dato que contendra el nuevo Nodo: ");
	scanf("%d", &nuevo->dato);
	
	if(primero==NULL){
		primero = nuevo;
		primero->siguiente = NULL;
		primero->atras = NULL;
		ultimo = primero;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = NULL;
		nuevo->atras = ultimo;
		ultimo = nuevo;
	}

	printf("\n Nodo ingresado con exito\n\n");
}

void buscarNodo(){
	struct nodo* actual = (struct nodo*)malloc(sizeof(struct nodo));
	actual = primero;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingrese el dato del nodo a Buscar: ");
	scanf("%d", &nodoBuscado);
	
	if(primero!=NULL){
		while(actual != NULL && encontrado != 1){
			
			if(actual->dato == nodoBuscado){
				printf("\n El nodo con el dato ( %d ) Encontrado\n\n", nodoBuscado);
				encontrado = 1;
			}
			
			actual = actual->siguiente;
		}
		if(encontrado == 0){
			printf("\n Nodo no Encontrado\n\n");
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}

void modificarNodo(){
	struct nodo* actual = (struct nodo*)malloc(sizeof(struct nodo));
	actual = primero;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingrese el dato del nodo a Buscar para Modificar: ");
	scanf("%d", &nodoBuscado);
	
	if(primero!=NULL){
		while(actual != NULL && encontrado != 1){
			
			if(actual->dato == nodoBuscado){
				printf("\n El nodo con el dato ( %d ) Encontrado", nodoBuscado);
				printf("\n Ingrese el nuevo dato para este nodo: ");
				scanf("%d", &actual->dato);
				printf("\n Nodo modificado con exito\n\n");
				encontrado = 1;
			}
			
			actual = actual->siguiente;
		}
		if(encontrado == 0){
			printf("\n Nodo no Encontrado\n\n");
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}


void eliminarNodo(){
	struct nodo* actual = (struct nodo*)malloc(sizeof(struct nodo));
	actual = primero;
	struct nodo* anterior = (struct nodo*)malloc(sizeof(struct nodo));
	anterior = NULL;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingrese el dato del nodo a Buscar para Eliminar: ");
	scanf("%d", &nodoBuscado);
	
	if(primero!=NULL){
		while(actual != NULL && encontrado != 1){
			
			if(actual->dato == nodoBuscado){
				
				if(actual==primero){
					primero = primero->siguiente;
					primero->atras = NULL;
				}else if(actual==ultimo){
					anterior->siguiente = NULL;
					ultimo = anterior;
				}else{
					anterior->siguiente = actual->siguiente;
					actual->siguiente->atras = anterior;
				}
				printf("\n Nodo eliminado con exito\n\n");
				
				encontrado = 1;
			}
			anterior = actual;
			actual = actual->siguiente;
		}
		if(encontrado == 0){
			printf("\n Nodo no Encontrado\n\n");
		}else{
			free(anterior);
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}

void imprimirListainicio(){
	struct nodo* actual = (struct nodo*)malloc(sizeof(struct nodo));
	actual = primero;
	if(primero!=NULL){
		while(actual != NULL){
			printf("\n %d", actual->dato);
			actual = actual->siguiente;
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}

void imprimirListaUltimo(){
	struct nodo* actual = (struct nodo*)malloc(sizeof(struct nodo));
	actual = ultimo;
	if(primero!=NULL){
		while(actual != NULL){
			printf("\n %d", actual->dato);
			actual = actual->atras;
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}	
}
