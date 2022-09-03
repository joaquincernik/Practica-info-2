#include <iostream>
#include  <stdlib.h>

using namespace std;
void preguntarMasLocation(int,int*,char*);
void preguntarCaracteres(int,int*,char*);
void imprimirCaracteres(int,int*,char*);
int main(int argc, char *argv[]) {
	char *puntero=NULL;
	int *pCantidad=NULL;
	int cantidad=0,cantidadNueva=0;
	pCantidad=&cantidadNueva;
	
	printf("Ingresar cantidad\n");
	scanf("%d",&cantidad);
	puntero=(char *)malloc(sizeof(char)*cantidad);
	
	if(puntero==NULL){
		printf("No hay memoria disponible\n");
		exit(1);
	}
	else{
		for(int a=0;a<cantidad;a++){
			printf("Ingresar elemento %d\n",a);
			scanf(" %c",(puntero+a));
		}
		
		for(int j=0;j<cantidad;j++){
			printf("%c\n",*(puntero+j));
		}
	}
	
	preguntarMasLocation(cantidad,pCantidad,puntero);
	preguntarCaracteres(cantidad,pCantidad,puntero);
	imprimirCaracteres(cantidad,pCantidad,puntero);
	free(puntero);
	
	return 0;
}

void preguntarMasLocation(int cantidad,int* pCantidad,char* puntero){
	printf("Cuantos caracteres mas de memoria desea?\n");
	scanf("%d",pCantidad);
	puntero=(char*)realloc(puntero,(cantidad+(*pCantidad))*sizeof(char));
}

void preguntarCaracteres(int cantidad,int *pCantidad,char* puntero){
	for(int a=0;a<(*pCantidad);a++){
		printf("Ingresar nuevo elemento\n");
		scanf(" %c",(puntero+a+cantidad));
	}
}

void imprimirCaracteres(int cantidad,int* pCantidad,char* puntero){
	for(int j=0;j<cantidad+(*pCantidad);j++){
		printf("%c\n",*(puntero+j));
	}
}

