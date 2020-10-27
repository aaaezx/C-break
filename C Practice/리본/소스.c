#include <stdio.h>
int main() {
	int input;
	scanf_s("%d", &input);
	for (int line = input; line > 0; line--) {
		for (int star = input; star >= line; star--)
			printf("*");
		for (int space = 1; space < line * 2 - 1; space++)
			printf(" ");
		for (int star = input; star >= line; star--)
			printf("*");
		printf("\n");
	}
	for (int line = 2; line <= input; line++) {
		for (int star = input; star >= line; star--)
			printf("*");
		for (int space = 1; space < line * 2 - 1; space++)
			printf(" ");
		for (int star = input; star >= line; star--)
			printf("*");
		printf("\n");
	}

	return 0;
}