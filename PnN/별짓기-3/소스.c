#include <stdio.h>
int main() {
	int num;
	scanf_s("%d", &num);
	for (int line = 1; line <= num; line++)
	{
		for (int i = num-1; i >= line; i--)
		{
			printf(" ");
		}
		for (int star = 1; star <= line; star++)
		{
			printf("*");
		}
		printf("\n");
	}

	return 0;
}