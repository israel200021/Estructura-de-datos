// Mendoza Rodriguez Israel
#include <stdio.h>
#include <stdlib.h>

struct nodo{
	int dato;
	struct nodo* siguiente;
};

struct nodo* primero = NULL;

void insertarNodo();
void buscarNodo();
void eliminarNodo();
void imprimirPila();


int main(){
	int opcionMenu = 0;
	do{
		printf("PILA");
		printf("\n1-insertar\n");
		printf("\n2-Buscar\n");
		printf("\n3-Eliminar\n");
		printf("\n4-imprimir\n");
		printf("\n5-Salir");
		printf("\n\n Escoja una Opcion: ");
		scanf("%d", &opcionMenu);
		switch(opcionMenu){
			case 1:
				printf("\n\n INSERTA NODO EN LA PILA \n\n");
				insertarNodo();
				break;
			case 2:
				printf("\n\n BUSCAR UN NODO EN LA PILA \n\n");
				buscarNodo();
				break;

			case 3:
				printf("\n\n ELIMINAR UN NODO DE LA PILA \n\n");
				eliminarNodo();
				break;
			case 4:
				printf("\n\n IMRIMIR PILA DE NODOS \n\n");
				imprimirPila();
				break;
			case 5:
				printf("\n\n Programa finalizado.");
				break;
			default:
				printf("\n\n Opcion No Valida \n\n");
		}
	}while(opcionMenu != 5);
	return 0;
}

void insertarNodo(){
	struct nodo* nuevo = (struct nodo*) malloc(sizeof(struct nodo));
	printf(" Ingrese el dato que contendra el nuevo Nodo: ");
	scanf("%d", &nuevo->dato);
	nuevo->siguiente = primero;
	primero = nuevo;
}

void buscarNodo(){
	struct nodo* actual = (struct nodo*) malloc(sizeof(struct nodo));
	actual = primero;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingrese el dato del Nodo a Buscar: ");
	scanf("%d", &nodoBuscado);
	if(primero != NULL);
		while(actual != NULL){


			if(actual->dato == nodoBuscado){
				printf("\n EL Nodo con el dato ( %d ) Encontrado\n\n", nodoBuscado);
				encontrado = 1;
			}

			actual = actual -> siguiente;
		}
		if(encontrado == 0){
			printf("\n Nodo no Encontrado\n\n");

	}else{
		printf("\n La pila se encuentra Vacia\n\n");
	}
}


void eliminarNodo(){
	struct nodo* actual = (struct nodo*) malloc(sizeof(struct nodo));
	actual = primero;
	struct nodo* anterior = (struct nodo*) malloc(sizeof(struct nodo));
	anterior = NULL;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingrese el dato del Nodo a Buscar para Eliminar: ");
	scanf("%d", &nodoBuscado);
	if(primero != NULL){
		while(actual != NULL && encontrado != 1){
			if(actual->dato == nodoBuscado){
				if(actual == primero){
					primero = primero -> siguiente;
				}else{
					anterior -> siguiente = actual -> siguiente;
				}
				printf("\n El Nodo ha sido eliminado con Exito");
				encontrado = 1;
			}
			anterior = actual;
			actual = actual -> siguiente;
		}
		if(encontrado == 0){
			printf("\n Nodo no Encontrado\n\n");
		}else{
			free(anterior);
		}
	}else{
		printf("\n La pila se encuentra Vacia\n\n");
	}
}

void imprimirPila(){
	struct nodo* actual = (struct nodo*) malloc(sizeof(struct nodo));
	actual = primero;
	if(primero != NULL){
		while(actual != NULL){
			printf("\n %d\n", actual -> dato);
			actual = actual -> siguiente;
		}
	}else{
		printf("\n La pila se encuentra Vacia\n\n");
	}
}
