#include <iostream>
#include  <stdlib.h>

using namespace std;

int main(int argc, char *argv[]) {
	float *puntero=NULL;
	float valor=0;
	int cantidad=0;
	printf("Ingresar cantidad\n");
	scanf("%d",&cantidad);
	puntero=(float*)malloc(sizeof(float)*cantidad);
	
	if(puntero==NULL){
		printf("No hay memoria disponible\n");
		exit(1);
	}
	else{
		for(int i=0;i<cantidad;i++){
			printf("Ingresar elemento %d\n",i);
			scanf("%f",&valor);
			*(puntero+i)=valor;
		}
		
		for(int i=0;i<cantidad;i++){
			printf("%f\n",*(puntero+i));
		}
	}
	free(puntero);
	
	return 0;
}

