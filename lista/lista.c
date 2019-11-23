#include "lista.h"

void insertar()

{
	// reservo memoria del nuevo nodo
	struct lista *nuevo=(struct lista*)malloc(sizeof(struct lista));
	printf("\n\tIngrese el dato: ");
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
