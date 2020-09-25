#include <stdio.h>
int main()
{
	int input, cnt = 0;
	printf("양의 정수 입력 : ");
	scanf_s("%d", &input);
	for (int i = 1;i <= input;i++)
	{
		if (input % i == 0)
			cnt++;
	}
	if (cnt == 2)
		printf("소수입니다.\n");
	else
		printf("소수가 아닙니다.\n");

	return 0;
}