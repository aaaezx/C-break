#include <stdio.h>
int main() {
	char input, upper, lower, num;
	scanf_s("%c", &input);
	if (input >= 'a' && input <= 'z')
	{
		upper = 'A' + (input - 'a');
		printf("%c의 대문자는 %c입니다.\n", input, upper);
	}
	else if (input >= 'A' && input <= 'Z')
	{
		lower = 'a' + (input - 'A');
		printf("%c의 소문자는 %c입니다.\n", input, lower);
	}
	else if (input >= '0' && input <= '9')
	{
		num = input - '0';
		printf("%'%c%'의 정수는 %d입니다.\n", input, num);
	}

	return 0;
}