#include <iostream>
#include <ctime>
#include <stdlib.h>
using namespace std;

int main(int argc, char *argv[]) {
	srand(time(NULL));
	char *puntero=NULL;
	int n=0;
	printf("Ingresar cuantos caracteres quiere reservar\n");
	scanf("%d",&n);
	
	puntero=(char*)malloc(n*sizeof(char)); 
	
	for(int i=0;i<n;i++){
		*(puntero+i)=rand()%100;
		printf("%c\n",*(puntero+i));
	}
	
	free(puntero);
	
	return 0;
}

