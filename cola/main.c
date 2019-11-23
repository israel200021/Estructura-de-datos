
#include "cola.c"
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
