#include <stdio.h>
int main()
{
	int a, b, c;
	printf("���� 3���� �Է��ϼ��� : ");
	scanf_s("%d%d%d", &a, &b, &c);
	if (b < a)
	{
		if (c < a && b < c)
			printf("���� ū ���� %d�̸�, ���� ���� ���� %d�Դϴ�.\n", a, b);
		else if (c < a && c < b)
			printf("���� ū ���� %d�̸�, ���� ���� ���� %d�Դϴ�.\n", a, c);
		else if (a < c)
			printf("���� ū ���� %d�̸�, ���� ���� ���� %d�Դϴ�.\n", c, b);
	}
	else if (a < b)
	{
		if (c < b && a < c)
			printf("���� ū ���� %d�̸�, ���� ���� ���� %d�Դϴ�.\n", b, a);
		else if (c < a && c < b)
			printf("���� ū ���� %d�̸�, ���� ���� ���� %d�Դϴ�.\n", b, c);
		else if (b < c)
			printf("���� ū ���� %d�̸�, ���� ���� ���� %d�Դϴ�.\n", c, a);
	}
	else if (a < c)
	{
		if (b < c && b < a)
			printf("���� ū ���� %d�̸�, ���� ���� ���� %d�Դϴ�.\n", c, b);
		else if (b < c && a < b)
			printf("���� ū ���� %d�̸�, ���� ���� ���� %d�Դϴ�.\n", c, a);
		else if (c < b)
			printf("���� ū ���� %d�̸�, ���� ���� ���� %d�Դϴ�.\n", b, a);
	}
	else if (b < c)
	{
		if (a < c && b < a)
			printf("���� ū ���� %d�̸�, ���� ���� ���� %d�Դϴ�.\n", c, b);
		else if (a < c && a < b)
			printf("���� ū ���� %d�̸�, ���� ���� ���� %d�Դϴ�.\n", c, a);
		else if (c < a)
			printf("���� ū ���� %d�̸�, ���� ���� ���� %d�Դϴ�.\n", a, b);
	}
	else if (a == b || a == c || c == b)
		printf("���� �ٸ� ���� �� ���� �Է����ּ���.\n");
	else
		printf("���� �ٸ� ���� �� ���� �Է����ּ���.\n");

	return 0;
}