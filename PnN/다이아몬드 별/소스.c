#include <stdio.h>
int main() {
	int input;
	scanf_s("%d", &input);
	for (int line = 1; line <= input / 2; line++)
	{
		for (int space = input / 2; space >= line; space--)
		{
			printf(" ");
		}
		for (int star = 1; star <= line; star++)
		{
			printf("*");
		}
		for (int star_2 = 1; star_2 < line; star_2++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (int star = 1; star <= input; star++)
	{
		printf("*");
	}
	printf("\n");
	for (int line = 1; line <= input / 2; line++)
	{
		for (int space = 1; space <= line; space++)
		{
			printf(" ");
		}
		for (int star = input / 2; star >= line; star--)
		{
			printf("*");
		}
		for (int star_2 = input / 2; star_2 > line; star_2--)
		{
			printf("*");
		}
		printf("\n");
	}


	return 0;
}