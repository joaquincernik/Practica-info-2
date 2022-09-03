#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

void cargar(int,char*);
void imprimir(int,char*);
int main(int argc, char *argv[]) {
	int n=0;
	int valor=0;
	char *puntero=NULL;
	printf("Ingresar cuantos caracteres desea introducir\n");
	scanf("%d",&n);
	puntero=(char*)malloc(n*sizeof(char));
	
	
	cargar(n,puntero);
	imprimir(n,puntero);
	free(puntero);
	return 0;
}

void cargar(int n, char *puntero){
		for(int i=0;i<n;i++){
			printf("Ingresar valor %d\n",i+1);
			scanf(" %c",(puntero+i));
		}
		
	
}
void imprimir(int n,char *puntero){
	
	for (int i=n;i==0;i--){
		printf("% c||",*(puntero+i));
	}
}
