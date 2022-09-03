#include <iostream>
using namespace std;

void reservarMemoria(int*,char*);
void reservarMasMemoria(int*,int*,char*);
int main(int argc, char *argv[]) {
	int opcion=0,cantidad=0,cantidadNueva=0;
	char* puntero=NULL;
	int* pCantidad=NULL;
	int* pCantidadNueva=NULL;
	
	pCantidad=&cantidad;
	pCantidadNueva=&cantidadNueva;
	do{
		printf("1.Reserva de memoria e introduccion de datos enteros\n");
		printf("2.Agregar reserva de memoria e introduccion de nuevos datos enteros\n");
		printf("3.Mostrar datos en el orden y orden invertido\n");
		scanf("%d",&opcion);
		switch(opcion){
		case 1:
			reservarMemoria(pCantidad,puntero);
			break;
		case 2:
			reservarMasMemoria(pCantidadNueva,pCantidad,puntero);
			break;
		case 3:
			//imprimir(pCantidadNueva,pCantidad,puntero);
			break;
		}
	} while(opcion!=0);
	free(puntero);
	return 0;
}

void reservarMemoria(int* pCantidad, char* puntero){
	printf("Ingresar cantidad de caracteres\n");
	scanf("%d",pCantidad);
	puntero=(char*)malloc((*pCantidad)*sizeof(char));
	
	for(int i=0;i<(*pCantidad);i++){
		printf("Ingresar elemento numero %d\n",i+1);
		scanf(" %c",(puntero+i));
	}
	//aca es para comprobar que se esta cargando bien
	for(int j=0;j<*pCantidad;j++){
		printf(" %c\n",*(puntero+j));
	}
	
}
void reservarMasMemoria(int* pCantidadNueva,int* pCantidad,char* puntero){
	printf("Cuantos mas caracteres?\n");
	scanf("%d",pCantidadNueva);
	int suma=0;
	suma=(*pCantidad)+(*pCantidadNueva);
	puntero=(char*)realloc(puntero,suma*sizeof(char));
	//Al hacer el realloc se cambian los valores antes ingresados
	for(int j=0;j<*pCantidad;j++){
		printf(" %c\n",*(puntero+j));
	}
	
	for(int i=0;i<(*pCantidadNueva);i++){
		printf("Ingresar elemento\n");
		scanf(" %c",(puntero+(*pCantidad)+i));
	}
	
	for(int j=0;j<(*pCantidad)+(*pCantidadNueva);j++){
		printf(" %c\n",*(puntero+j));
	}
	/*for(int j=(*pCantidad)+(*pCantidadNueva);j<0;j--){
		printf(" %c\n",*(puntero+j));
	}*/
}


