#include <stdio.h>
int main()
{
	int input, cnt=0;
	printf("���� �ϳ��� �Է��ϼ���. : ");
	scanf_s("%d", &input);
	while (input > 0)
	{
		input = input / 10;
		cnt++;
	}
	printf("�ڸ����� %d�Դϴ�.\n", cnt);


	return 0;
}