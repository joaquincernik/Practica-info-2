#include <iostream>
#include <ctype.h>
using namespace std;

void pasarMayuscula(char[23]);
void pasarMinuscula(char[23]);
int main(int argc, char *argv[]) {
	char abecedario[26]={0};
	//char *puntero=NULL;
	//puntero=abecedario;
	for(int i=0;i<23;i++){
		abecedario[i]=65+i;
	}
	//printf("\n");
	pasarMinuscula(abecedario);
	pasarMayuscula(abecedario);

	return 0;
}

void pasarMinuscula(char abecedario[23]){
	char imprimir=' ';
	for(int i=0;i<23;i++){
		imprimir=tolower(abecedario[i]);
		printf("% c",imprimir);
	}
	printf("\n");
	
}
void pasarMayuscula(char abecedario[23]){
		char imprimir=' ';
		for(int i=0;i<23;i++){
			imprimir=toupper(abecedario[i]);
			printf("% c",imprimir);
		}
		
	}



