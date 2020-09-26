#include <stdio.h>
int main()
{
	int a, b;
	printf("정수 두 개를 입력하세요. : ");
	scanf_s("%d%d", &a, &b);
	printf("%d+%d=%d.\n", a, b, a + b);

	return 0;
}