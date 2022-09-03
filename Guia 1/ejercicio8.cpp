#include <iostream>
#include <ctype.h>
using namespace std;

int main(int argc, char *argv[]) {
	char abecedario[26]={0};
	char *puntero=NULL;
	puntero=abecedario;
	for(int i=0;i<23;i++){
		abecedario[i]=65+i;
		printf("% c",abecedario[i]);
	}
	printf("\n");
	for(int j=0;j<23;j++){
		abecedario[j]=tolower(abecedario[j]);
		printf("% c",abecedario[j]);
	}
	
	
	
	return 0;
}

