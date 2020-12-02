#include <stdio.h>
int main(){
	int num = 0;
	char ch;
	scanf_s("%c", &ch);
	char *cptr = &ch;
	while (*cptr <= 'z'){
		printf("%c\n", *cptr);
		ch++;
	}
	return 0;
}