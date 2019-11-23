#include "listacircular.c"

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

