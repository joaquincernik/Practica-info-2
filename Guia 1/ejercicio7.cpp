#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	double array[5]= {4.5,8,2.3,1.1,3};
	float sumatoria=0,promedio=0;;
	float *puntpromedio=NULL;
	puntpromedio=&promedio;
	
	for(int i=0;i<5;i++){
		sumatoria=array[i]+sumatoria;
	}
	*puntpromedio=sumatoria/5;
	printf("%f\n",sumatoria);
	printf("%f",promedio);
	
	
	return 0;
}

