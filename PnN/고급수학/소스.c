#include <stdio.h>
int main() {
	int input, a, b, c;
	scanf_s("%d", &input);
	int triangle = 0;
	for (int i = 1; i <= input; i++)
	{
		scanf_s("%d %d %d", &a, &b, &c);
		if ((a * a) == (b * b) + (c * c) || (b * b) == (a * a) + (c * c) ||
			(c * c) == (b * b) + (a * a))
			triangle = 1;
		else
			triangle = 0;
		printf("Scenario #%d:\n", i);
		if (triangle == 1)
			printf("yes\n\n");
		else
			printf("no\n\n");
	}

	return 0;
}