#include <stdio.h>
int main() {
	int input;
	scanf_s("%d", &input);
	for (int line = input; line > 0; line--) {
		for (int space = 1; space < line; space++)
			printf(" ");
		for (int star = input * 2 - 1; star >= line * 2 - 1; star--)
			printf("*");
		printf("\n");
	}
	for (int line = 2; line <= input; line++) {
		for (int space = 1; space < line; space++)
			printf(" ");
		for (int star = input * 2 - 1; star >= line * 2 - 1; star--)
			printf("*");
		printf("\n");
	}

	return 0;
}