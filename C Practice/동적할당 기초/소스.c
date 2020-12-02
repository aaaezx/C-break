#include <stdio.h>
#include <stdlib.h>
int main(void){
	int value;
	scanf_s("%d", &value);
	int *numptr = malloc(sizeof(int)*value);
	for (int i = 0; i < value; i++){
		numptr[i] = i;
	}
	for (int i = 0; i < value; i++){
		printf("%d\n", numptr[i]);
	}
	free(numptr);
	return 0;
}