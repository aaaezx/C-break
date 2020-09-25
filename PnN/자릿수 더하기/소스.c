#include <stdio.h>
int main()
{
	int input, sum = 0;
	printf("정수 하나를 입력하세요. : ");
	scanf_s("%d", &input);
	while (input != 0)
	{
		sum += input % 10;
		input = input / 10;
	}
	printf("각 자릿수의 합은 %d이다.\n", sum);

	return 0;
}