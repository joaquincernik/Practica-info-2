#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int *puntero=NULL;
	int a=0;
	
	puntero=&a;
	printf("Direccion de memoria: %X\n",&a);
	printf("Valor de variable: %d\n",a);
	printf("Direccion de puntero: %X\n",&puntero);
	printf("Valor que apunta el puntero %X\n",*puntero);
	return 0;
}

