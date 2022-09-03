#include <iostream>
using namespace std;

int main(int argc, char *argv[]) {
	int a=2,b=4;
	int *punta=NULL;
	int *puntb=NULL;
	
	punta=&a;
	puntb=&b;
	
	*punta=4;
	*puntb=2;
	
	printf("a=%d,b=%d",a,b);
	return 0;
}

