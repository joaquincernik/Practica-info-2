#include <iostream>
#include  <stdlib.h>

using namespace std;

int main(int argc, char *argv[]) {
	char *puntero=NULL;
	int cantidad=0;
	//char valor=' ';
	
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
			//*(puntero+a)=valor;
		}
		
		for(int j=0;j<cantidad;j++){
			printf("%c\n",*(puntero+j));
		}
	}
	free(puntero);
	
	return 0;
}

