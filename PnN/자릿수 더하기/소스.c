#include <stdio.h>
int main()
{
	int input, sum = 0;
	printf("���� �ϳ��� �Է��ϼ���. : ");
	scanf_s("%d", &input);
	while (input != 0)
	{
		sum += input % 10;
		input = input / 10;
	}
	printf("�� �ڸ����� ���� %d�̴�.\n", sum);

	return 0;
}