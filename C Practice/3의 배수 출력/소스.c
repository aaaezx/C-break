#include <stdio.h>
int main()
{
	int input;
	printf("출력할 3의 배수의 개수는? : ");
	scanf_s("%d", &input);
	int cnt = 0;
	while (cnt < input)
	{
		cnt++;
		printf("%d  ", 3 * cnt);
	}

	return 0;
}