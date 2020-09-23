#include <stdio.h>
int main()
{
	int sum = 0;
	int i;
	for (i=1; i <= 100; i++)
	{
		if (i / 2 != 0)
			sum += i;
	}
	printf("1~100까지 홀수의 합은 %d입니다.\n", sum);
	return 0;
}