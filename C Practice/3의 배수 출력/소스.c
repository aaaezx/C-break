#include <stdio.h>
int main()
{
	int input;
	printf("����� 3�� ����� ������? : ");
	scanf_s("%d", &input);
	int cnt = 0;
	while (cnt < input)
	{
		cnt++;
		printf("%d  ", 3 * cnt);
	}

	return 0;
}