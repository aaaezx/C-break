#include <stdio.h>
#include <string.h>
int main(){
	char input[80];
	gets(input);
	int charlengt = strlen(input);
	printf("length of string : %d\n", charlengt);

	return 0;
}