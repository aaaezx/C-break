#include <stdio.h>
int main()
{
	int input, cnt = 0;
	printf("���� ���� �Է� : ");
	scanf_s("%d", &input);
	for (int i = 1;i <= input;i++)
	{
		if (input % i == 0)
			cnt++;
	}
	if (cnt == 2)
		printf("�Ҽ��Դϴ�.\n");
	else
		printf("�Ҽ��� �ƴմϴ�.\n");

	return 0;
}