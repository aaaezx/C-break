#include <stdio.h>
#include <math.h>
int main()
{
	int input, cnt = 0;
	printf("정수를 입력하세요. : ");
	scanf_s("%d", &input);
	int temp = input;
	while (temp > 0)
	{
		temp = temp / 10;
		cnt++;
	}
	temp = input;
	int result;
	while (cnt != 0)
	{
		cnt--;
		int one = (input / (int)pow(10, cnt)) % 10;
		int two = temp % 10;
		temp = temp / 10;
		if (one == two)
			result = 1;
		else
			result = 0;
	}
	if (result)
		printf("팰린드롬수입니다.\n");
	else
		printf("팰린드롬수가 아닙니다.\n");

	return 0;
}