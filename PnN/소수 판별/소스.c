#include <stdio.h>
int main()
{
	int input, i, cnt=0;
	printf("���� �Է��ϼ���. : ");
	scanf_s("%d", &input);
	for (int i = 1; i <= input; i++)
	{
		if (input % i == 0)
			cnt++;
	}
	if (cnt % 2 == 0)
		printf("%d�� �Ҽ��Դϴ�.\n", input);
	else
		printf("%d�� �Ҽ��� �ƴմϴ�.\n", input);

	return 0;
}