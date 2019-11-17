//Mendoza Rodriguez Israel 
#include <stdio.h>
#include <conio.h>
#include <stdlib.h>

typedef struct nodo{
	int dato;
	struct nodo* siguiente;
} nodo;

nodo* primero = NULL;
nodo* ultimo = NULL;

void insertarNodo();
void buscarNodo();
void mostrarCola();

int main(){
	int opcionMenu = 0;
	do{
		
	
		printf("\n 1. Insertar       4. Salir      ");
		printf("\n 2. Buscar");
		printf("\n 3. Mostrar");
		
		printf("\n\n Escoja una Opcion: ");
		scanf("%d", &opcionMenu);
		switch(opcionMenu){
			case 1:
				printf("\n\n INSERTAR NODO EN LA COLA \n");
				insertarNodo();
				break;
			case 2:
				printf("\n\n BUSCAR UN NODO EN LA COLA \n");
				buscarNodo();
				break;	
			case 3:
				printf("\n\n DESPLEGAR COLA DE NODOS \n");
				mostrarCola();	
				break;
			case 4:
				printf("\n\n Programa finalizado...");
				break;
			default:
				printf("\n\n Opcion No Valida \n\n");	
		}
	}while(opcionMenu != 4);
	return 0;
}

void insertarNodo(){
	nodo* nuevo = (nodo*) malloc(sizeof(nodo));
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
	nodo* actual = (nodo*) malloc(sizeof(nodo));
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
	nodo* actual = (nodo*) malloc(sizeof(nodo));
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
