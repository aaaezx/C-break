#include <stdio.h>
int main()
{
	int year;
	printf("���� �Է� : ");
	scanf_s("%d", &year);
	if (year % 4 == 0 && year % 100 != 0)
		printf("1.\n");
	else if (year % 400 == 0)
		printf("1.\n");
	else
		printf("0.\n");

	return 0;
}