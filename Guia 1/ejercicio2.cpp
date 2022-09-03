#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int nota1=0,nota2=0,nota3=0;
	printf("Ingrese 3 notas\n");
	scanf("%d",&nota1);
	scanf("%d",&nota2);
	scanf("%d",&nota3);
	
	float promedio=(float)(nota1+nota2+nota3)/3;
	printf("%f",promedio);
	return 0;
}

