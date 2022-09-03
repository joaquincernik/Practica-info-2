#include <iostream>
#include  <stdlib.h>

using namespace std;

int main(int argc, char *argv[]) {
	char *puntero=NULL;
	char valor=0;
	int cantidad=0;
	printf("Ingresar cantidad\n");
	scanf("%d",&cantidad);
	puntero=(char*)malloc(sizeof(char)*cantidad);
	
	if(puntero==NULL){
		printf("No hay memoria disponible\n");
		exit(1);
	}
	else{
		for(int i=0;i<cantidad;i++){
			printf("Ingresar elemento %d\n",i);
			scanf("%c",&valor);
			*(puntero+i)=valor;
		}
		
		for(int i=0;i<cantidad;i++){
			printf("%c\n",*(puntero+i));
		}
	}
	free(puntero);
	
	return 0;
}


