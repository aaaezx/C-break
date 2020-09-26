#include <stdio.h>
int main() {
	int one, two, three, four, five;
	scanf_s("%d", &one);
	scanf_s("%d", &two);
	scanf_s("%d", &three);
	scanf_s("%d", &four);
	scanf_s("%d", &five);

	if (one < 40)
		one = 40;

	if (two < 40)
		two = 40;

	if (three < 40)
		three = 40;

	if (four < 40)
		four = 40;

	if (five < 40)
		five = 40;

	printf("%d\n", (one + two + three + four + five) / 5);

	return 0;
}