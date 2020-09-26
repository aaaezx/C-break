#include <stdio.h>
int main()
{
	int num;
	scanf_s("%d", &num);
	int sum = 0;
	while (num>0)
	{
		sum += num;
		num--;
	}
	printf("%d", sum);

	return 0;
}