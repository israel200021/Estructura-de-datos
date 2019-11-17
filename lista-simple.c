//Mendoza Rodriguez Israel
#include<stdio.h>
#include<stdlib.h>

void principal();
void insertar();
void imprimir();
void buscar();
void eliminar();

struct lista
{
	int datos;
	struct lista *siguiente; 
};

struct lista *primero = NULL;
struct lista *ultimo = NULL;

int main(void)
{
	int opcionMenu = 0;
	do{

		printf("\n| 1. Insertar      | 4. Eliminar      ");
		printf("\n| 2. Buscar        | 5. Salir     ");
		printf("\n| 3. imprimir      |       ");

		printf("\n\n Escoja una Opcion: ");
		scanf("%d", &opcionMenu);
		switch(opcionMenu){
			case 1:
				printf("\n INSERTA NODO EN LA PILA \n");
				insertar();
				break;
			case 2:
				printf("\n BUSCAR UN NODO EN LA PILA \n");
				buscar();
				break;
			case 3:
				printf("\n MODIFICAR UN NODO DE LA PILA \n");
				imprimir();
				break;
			case 4:
				printf("\n ELIMINAR UN NODO DE LA PILA \n");
				eliminar();
				break;
				case 5:
				printf("\n Programa finalizado...");
				break;
			default:
				printf("\n Opcion No Valida \n");
		}
	}while (opcionMenu!=5);
	
	return 0;
}

void insertar()
{
	// reservo memoria del nuevo nodo
	struct lista *nuevo=(struct lista*)malloc(sizeof(struct lista));
	printf("\n\tEnter data: ");
	// se asigna un dato al nuevo nodo
	scanf("%d",&nuevo->datos);
	
	//insertar nuevo nodo con lista vacia
	if(primero==NULL)
	{
		primero=nuevo;
		primero->siguiente=NULL;
		ultimo=nuevo;
		
	}else
	{
		ultimo->siguiente=nuevo;
		nuevo->siguiente=NULL;
		ultimo=nuevo;
	}

}

void imprimir()
{
	struct lista *actual=(struct lista*)malloc(sizeof(struct lista));
	actual=primero;
	
	if(primero!=NULL)
	{
		while(actual!=NULL)
		{
			printf("%d\n",actual->datos);
			actual=actual->siguiente;
		}
	}else
	{
		printf("La lista esta vacia");
	}
}

void buscar()
{
	// se crea un nodo aux
	struct lista *aux=(struct lista*)malloc(sizeof(struct lista));
	aux=primero;
	
	int nbuscar=0;
	int nencontrado=0;
	
	printf("que dato de la lista desa bucar: ");
	scanf("%d",&nbuscar);
	
	if(aux!=NULL)
	{
		while(aux!=NULL && nencontrado!=1)
		{
			if(aux->datos==nbuscar)
			{
				nencontrado=1;
			}
			else
			{
				nencontrado=0;
			}
			
			
			aux=aux->siguiente;
		}
		if(nencontrado==1)
			printf("Nodo (%d) encontrado",nbuscar);
			else
			printf("Nodo (%d) no enocntrado",nbuscar);
		
	}else
		printf("Lista sin valores");
		
}

void eliminar()
{
	struct lista *actual=(struct lista*)malloc(sizeof(struct lista));
	actual=primero;
	
	struct lista *anterior=(struct lista*)malloc(sizeof(struct lista));
	anterior=NULL;
	
	int nbuscar=0;
	int aux=0;	
	printf("Dato que desea eliminar: ");
	scanf("%d",&nbuscar);
	
	if(primero!=NULL)
	{
		while(actual!=NULL && aux!=1)
		{
			if(actual->datos==nbuscar)
			{
				
				if(actual==primero)
				{
					primero=primero->siguiente;
				}else if(actual==ultimo)
				{
					anterior->siguiente=NULL;
				}else 
				{
					anterior->siguiente=actual->siguiente;
				}
				
				printf("Nodo borrado exitosamente\n");
				aux=1;
			}
			
			
			anterior=actual;
			actual=actual->siguiente;
		}
	
			if(aux==1)
			{
				free(anterior);
			}
			else
			printf("Nodo no encontrado");
			
	}else
	{
		printf("Lista vacia");
	}
}
