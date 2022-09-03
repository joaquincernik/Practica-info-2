#include <iostream>
#include  <stdlib.h>

using namespace std;

int main(int argc, char *argv[]) {
	int *puntero=NULL;
	int valor=0,cantidad=0;
	printf("Ingresar cantidad\n");
	scanf("%d",&cantidad);
	puntero=(int*)malloc(sizeof(int)*cantidad);
	
	if(puntero==NULL){
		printf("No hay memoria disponible\n");
		exit(1);
	}
	else{
		for(int i=0;i<cantidad;i++){
			printf("Ingresar elemento %d\n",i);
			scanf("%d",&valor);
			*(puntero+i)=valor;
		}
		
		for(int i=0;i<cantidad;i++){
			printf("%d\n",*(puntero+i));
		}
	}
	free(puntero);
	
	return 0;
}

