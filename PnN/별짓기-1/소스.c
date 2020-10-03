#include <stdio.h>
int main() {
	int num;
	scanf_s("%d", &num);
	for (int line = 0; line < num; line++)
	{
		for (int star = 0; star <= line; star++)
			printf("*");
		printf("\n");
	}
	return 0;
}