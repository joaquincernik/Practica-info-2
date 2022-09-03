#include <math.h>
#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {
	int opcion=0,resultado2=0,num1=0,num2=0;
	float resultado=0;
	float *punteroResultado=NULL;
	int *punteroResultado2=NULL;
	punteroResultado=&resultado;
	
	printf("Ingresar dos numeros\n");
	scanf("%d",&num1);
	scanf("%d",&num2);
	
	do{
		printf("1:Sumar\n");
		printf("2:Restar\n");
		printf("3:Multiplicar\n");
		printf("4:Dividir\n");
		printf("5:Elevar a la potencia\n");
		printf("6:Calcular raiz\n");
		scanf("%d",&opcion);
		switch(opcion){
		case 1:
			*punteroResultado=num1+num2;
			printf("%d + %d = %d\n",num1,num2,resultado);
		break;
		case 2:
			*punteroResultado=num1-num2;
			printf("%d - %d = %d\n",num1,num2,resultado);
		break;
		case 3:
			*punteroResultado=num1*num2;
			printf("%d * %d = %d\n",num1,num2,resultado);
		break;
		case 4:
			*punteroResultado=(float)num1/num2;
			printf("%d / %d = %f\n",num1,num2,resultado);
			break;
		case 5:
			
			*punteroResultado=(float)pow(num2,num1);
			printf("%d a la %d = %f\n",num1,num2,resultado);
			break;
		case 6:
			
			*punteroResultado2=(float)sqrt(num2);
			*punteroResultado=(float)sqrt(num1);
			printf("raiz cuadrada de %d = %lf; raiz cuadrada de %d = %lf",num1,resultado,num2,resultado2);
		break;
		
		}
	} while(opcion!=0);
	return 0;
}

