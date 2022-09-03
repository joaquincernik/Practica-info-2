#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

void imprimir(int,char*);
int main(int argc, char *argv[]) {
	srand(time(NULL));
	char *puntero=NULL;
	int n=0,m=0;
	printf("Ingresar cuantos caracteres quiere reservar\n");
	scanf("%d",&n);
	
	puntero=(char*)malloc(n*sizeof(char)); 
	imprimir(n,puntero);
	
	printf("Ingresar la cantidad de nuevos valores\n");
	scanf("%d",&n);
	puntero= (char*)realloc(puntero,n*sizeof(char));
	imprimir(n,puntero);
	free(puntero);
	return 0;
}

void imprimir(int n,char *puntero){
	for(int i=0;i<n;i++){
		*(puntero+i)=rand()%80+65;
		printf("%c\n",*(puntero+i));
	}
	
}


