#include <stdio.h>
int main()
{
	int input, i, cnt=0;
	printf("수를 입력하세요. : ");
	scanf_s("%d", &input);
	for (int i = 1; i <= input; i++)
	{
		if (input % i == 0)
			cnt++;
	}
	if (cnt % 2 == 0)
		printf("%d는 소수입니다.\n", input);
	else
		printf("%d는 소수가 아닙니다.\n", input);

	return 0;
}