#include "lista.c"

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
