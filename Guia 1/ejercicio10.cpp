#include <iostream>
#include <ctime>
using namespace std;
void impares(int*[10]);
void pares(int*[10]);
int main(int argc, char *argv[]) {
	int array[10]={0};
	int *puntero[10]={0};
	srand(time(NULL));
	for(int i=0;i<10;i++){
		puntero[i]=&array[i];
	}
	
	for(int i=0;i<10;i++){
		*puntero[i]=rand()%10+5;
		
	printf("%d\t",array[i]);
	}
	printf("\n");
	
	impares(puntero);
	pares(puntero);
	return 0;
}

void impares(int* puntero[10]){
	for(int i=0;i<5;i++){
		printf("Posiciones impares: %d\n",*puntero[2*i+1]);
	}
}
	
	
void pares(int* puntero[10]){
		for(int i=0;i<5;i++){
			printf("Posiciones pares: %d\n",*puntero[2*i]);
		}
	}

