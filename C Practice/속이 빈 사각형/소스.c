#include <stdio.h>
int main() {
	int input;
	scanf_s("%d", &input);
	for (int row = 1; row <= input; row++) {
		for (int col = 1; col <= input; col++) {
			if (row == 1 || row == input || col == 1 || col == input)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}
	return 0;
}