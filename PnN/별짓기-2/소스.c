#include <stdio.h>
int main() {
	int num;
	scanf_s("%d", &num);
	for (int line = 0; line <= num; line++)
	{
		for (int star = num; star > line; star--)
			printf("*");
		printf("\n");
	}

	return 0;
}