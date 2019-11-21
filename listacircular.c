//Mendoza Rodriguez Israel
#include <stdio.h>
#include <stdlib.h>

struct nodoCircular{
	int dato;
	struct nodoCircular* siguiente;
} ;


struct nodoCircular* primero = NULL;
struct nodoCircular* ultimo = NULL;

void insertarNodo();
void buscarNodo();
void modificarNodo();
void eliminarNodo();
void mostrarLista();


int main(){
	// se crea menu de opciones
	int opcionMenu = 0;
	do{
	    	printf("\n1-insertar\n");
				printf("\n2-Buscar\n");
				printf("\n3-Modificar\n");
				printf("\n4-Eliminar\n");
				printf("\n5-Imprimir\n");
				printf("\n6-Salir");

		printf("\n\n Escoja una Opcion: ");
		scanf("%d", &opcionMenu);

		switch(opcionMenu){
		case 1:
			insertarNodo();
			break;
		case 2:
			buscarNodo();
			break;
		case 3:
			modificarNodo();
			break;
		case 4:
			eliminarNodo();
			break;
		case 5:
			mostrarLista();
			break;
		case 6:
			printf("\n\n Programa finalizado");
			break;
		default:
			printf("\n\n Opcion No Valida \n\n");
		}

	}while(opcionMenu != 6);
	return 0;
}


void insertarNodo(){
	struct nodoCircular* nuevo = (struct nodoCircular*) malloc(sizeof(struct nodoCircular));
	printf(" Ingrese el dato que contendra el nuevo Nodo: ");
	scanf("%d",&nuevo->dato);
// se crea la forma circular
	if(primero==NULL){
		primero = nuevo;
		primero->siguiente = primero;
		ultimo = primero;
	}else{
		ultimo->siguiente = nuevo;
		nuevo->siguiente = primero;
		ultimo = nuevo;
	}
	printf("\n Nodo ingresado con exito\n\n");
}

void buscarNodo(){
	struct nodoCircular* actual = (struct nodoCircular*)malloc(sizeof(struct nodoCircular));
	actual = primero;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingrese el valor de nodo a Buscar: ");
	scanf("%d",&nodoBuscado);
	if(primero!=NULL){
		do{
			if(actual->dato == nodoBuscado){
				printf("\n Nodo con el dato ( %d ) Encontrado\n\n", nodoBuscado);
				encontrado = 1;
			}
			actual = actual->siguiente;
		}while(actual!=primero && encontrado!=1);

		if(encontrado==0){
			printf("\n Nodo no Encontrado\n\n");
		}
	}else{
		printf("\n La lista se encuentra vaci\n\n");
	}
}

void modificarNodo(){
	struct nodoCircular* actual = (struct nodoCircular*)malloc(sizeof(struct nodoCircular));
	actual = primero;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingrese el valor de nodo a Buscar para Modificar: ");
	scanf("%d",&nodoBuscado);
	if(primero!=NULL){
		do{
			if(actual->dato == nodoBuscado){
				printf("\n Nodo con el dato ( %d ) Encontrado", nodoBuscado);
				printf("\n Ingrese el nuevo dato para este Nodo: ");
				scanf("%d",&actual->dato);
				printf("\n Nodo modificado con exito\n\n");
				encontrado = 1;
			}
			actual = actual->siguiente;
		}while(actual!=primero && encontrado!=1);

		if(encontrado==0){
			printf("\n Nodo no Encontrado\n\n");
		}
	}else{
		printf("\n La lista se encuentra vaci\n\n");
	}
}


void eliminarNodo(){
	struct nodoCircular* actual = (struct nodoCircular*)malloc(sizeof(struct nodoCircular));
	actual = primero;
	struct nodoCircular* anterior = (struct nodoCircular*)malloc(sizeof(struct nodoCircular));
	anterior = NULL;
	int nodoBuscado = 0, encontrado = 0;
	printf(" Ingrese el valor de nodo a Buscar para Eliminar: ");
	scanf("%d",&nodoBuscado);
	if(primero!=NULL){
		do{
			if(actual->dato == nodoBuscado){
				printf("\n Nodo con el dato ( %d ) Encontrado", nodoBuscado);
				if(actual==primero){
					primero = primero->siguiente;
					ultimo->siguiente = primero;
				}else if(actual==ultimo){
					anterior->siguiente  = primero;
					ultimo = anterior;
				}else{
					anterior->siguiente = actual->siguiente;
				}
				printf("\n Nodo Eliminado\n\n");
				encontrado = 1;
			}
			anterior = actual;
			actual = actual->siguiente;
		}while(actual!=primero && encontrado!=1);

		if(encontrado==0){
			printf("\n Nodo no Encontrado\n\n");
		}else{
			free(anterior);
		}
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}

void mostrarLista(){
	struct nodoCircular* actual = (struct nodoCircular*)malloc(sizeof(struct nodoCircular));
	actual = primero;
	if(primero!=NULL){
		do{
			printf("%d->", actual->dato);
			actual = actual->siguiente;
		}while(actual!=primero);
		printf("->%d",primero->dato );
	}else{
		printf("\n La lista se encuentra vacia\n\n");
	}
}
