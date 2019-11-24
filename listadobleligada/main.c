#include "listadobleligada.c"

int main(){
	int opcionMenu = 0;
	do{

		printf("\n 1. Insertar       5. imprimir desde inicio ");
		printf("\n 2. Buscar         6. imprmir desde el final ");
		printf("\n 3. Modificar      7. Salir         ");
		printf("\n 4. Eliminar                        ");		
	
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
			
				imprimirListainicio();
				break;
			case 6:
			
				imprimirListaUltimo();
				break;
			case 7:
				printf("\n\n Programa finalizado");
				break;
			default:
				printf("\n\n Opcion No Valida \n\n");	
		}
	}while(opcionMenu != 7);
	return 0;
}
