#include <stdio.h>
int main() {
	char input, upper, lower, num;
	scanf_s("%c", &input);
	if (input >= 'a' && input <= 'z')
	{
		upper = 'A' + (input - 'a');
		printf("%c�� �빮�ڴ� %c�Դϴ�.\n", input, upper);
	}
	else if (input >= 'A' && input <= 'Z')
	{
		lower = 'a' + (input - 'A');
		printf("%c�� �ҹ��ڴ� %c�Դϴ�.\n", input, lower);
	}
	else if (input >= '0' && input <= '9')
	{
		num = input - '0';
		printf("%'%c%'�� ������ %d�Դϴ�.\n", input, num);
	}

	return 0;
}