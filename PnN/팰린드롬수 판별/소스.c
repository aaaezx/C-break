#include <stdio.h>
#include <math.h>
int main()
{
	int input, cnt = 0;
	printf("������ �Է��ϼ���. : ");
	scanf_s("%d", &input);
	int temp = input;
	while (temp > 0)
	{
		temp = temp / 10;
		cnt++;
	}
	temp = input;
	int result;
	while (cnt != 0)
	{
		cnt--;
		int one = (input / (int)pow(10, cnt)) % 10;
		int two = temp % 10;
		temp = temp / 10;
		if (one == two)
			result = 1;
		else
			result = 0;
	}
	if (result)
		printf("�Ӹ���Ҽ��Դϴ�.\n");
	else
		printf("�Ӹ���Ҽ��� �ƴմϴ�.\n");

	return 0;
}