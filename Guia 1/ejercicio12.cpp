#include <iostream>
using namespace std;

float calcularPromedio(int[],int);
int main(int argc, char *argv[]) {
	int *puntero[10]={0};
	int sueldo=0;
	int array[10]={0};
	int contador=0;
	int opcion=0;
	float promedio=0;
	
	
	do{
		
		printf("Ingresar sueldo\n");
		scanf("%d",&sueldo);
		puntero[contador]=&array[contador];
		*puntero[contador]=sueldo;
		//printf("%d",array[contador]);
		contador++;
		
	}while(sueldo!=0||contador!=10);
	
	do{
		
		printf("Elegir una de las opciones\n");
		printf("1.Cantidad de saldos cargados\n");
		printf("2.Promedio de saldos\n");
		printf("3.Saldos menores al promedio\n");
		printf("4.Saldos mayores al promedio \n");
		printf("5.Total recaudado en el mes");
		scanf("%d",&opcion);
		
		switch(opcion){
		case 1:
			printf("La cantidad fue de %d",contador);
			break;
		case 2:
			calcularPromedio(array,contador);
			printf("%f",promedio);
			break;
		case 3:
			/*for(int i=0;i<contador;i++){
				if(int i=0;i<contador;i++){
					
				}
			}*/
			break;
		}
	} while(opcion!=0);
	//printf("%d",array[0]);
	return 0;
}
float calcularPromedio(int array[],int contador){
	float promedio=0;
	int sumatoria=0;
	for(int i=0;i<contador;i++){
		sumatoria=sumatoria+array[contador];
	}
	promedio=(float)sumatoria/contador;
	return promedio;
}

