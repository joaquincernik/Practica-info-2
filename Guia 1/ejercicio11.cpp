#include <iostream>
#include <ctime>
using namespace std;
void promedio(int*[10]);
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
	
	promedio(puntero);
	
	return 0;
}

void promedio(int* puntero[10]){
	int sumatoria=0;
	float promedio=0;
	for(int i=0;i<5;i++){
		sumatoria=sumatoria+ *puntero[i];
	}
	promedio=(float)sumatoria/10;
	printf("Promedio: %0.2f",promedio);
}
	
	
	void pares(int* puntero[10]){
		for(int i=0;i<5;i++){
			printf("Posiciones pares: %d\n",*puntero[2*i]);
		}
	}
		
		
