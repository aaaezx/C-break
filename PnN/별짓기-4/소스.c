#include <stdio.h>
int main() {
	int input;
	scanf_s("%d", &input);
	int cnt = 0;
	while (input--)
	{
		for (int i = 0; i < input; i++) printf(" ");
		for (int j = (++cnt) * 2 - 1; j > 0; j--) printf("*");
		printf("\n");
	}

	return 0;
}