#include "pila.c"
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
