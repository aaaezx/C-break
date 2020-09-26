#include <stdio.h>
int main() {
	int input;
	scanf_s("%d", &input);
	int i, result = 1;

	for (i = 1;i <= input;i++)
		result *= i;

	printf("%d!=%d\n", input, result);

	return 0;
}