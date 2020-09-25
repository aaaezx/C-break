#include <stdio.h>
int main()
{
	int input, cnt=0;
	printf("정수 하나를 입력하세요. : ");
	scanf_s("%d", &input);
	while (input > 0)
	{
		input = input / 10;
		cnt++;
	}
	printf("자릿수는 %d입니다.\n", cnt);


	return 0;
}