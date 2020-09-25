#include <stdio.h>
#include <math.h>
int main()
{
	int input;
	int cnt = 0;

	printf("수를 입력하세요. : ");
	scanf_s("%d", &input);

	int temp = input;

	while (temp > 0)
	{
		temp = temp / 10;
		cnt++;
	}
	temp = input;
	int re;
	while (cnt != 0)
	{
		cnt--;
		int pro = input / (int)pow(10, cnt) % 10;
		int two = temp % 10;
		temp = temp / 10;
		if (pro == two)
			re=1;
		else
			re=0;
	}
	if (re){
		printf("Yes.\n");
	}
	else
		printf("No.\n");


	return 0;
}