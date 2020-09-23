#include <stdio.h>
int main()
{
	int a, b, c;
	printf("숫자 3개를 입력하세요 : ");
	scanf_s("%d%d%d", &a, &b, &c);
	if (b < a)
	{
		if (c < a && b < c)
			printf("가장 큰 수는 %d이며, 가장 작은 수는 %d입니다.\n", a, b);
		else if (c < a && c < b)
			printf("가장 큰 수는 %d이며, 가장 작은 수는 %d입니다.\n", a, c);
		else if (a < c)
			printf("가장 큰 수는 %d이며, 가장 작은 수는 %d입니다.\n", c, b);
	}
	else if (a < b)
	{
		if (c < b && a < c)
			printf("가장 큰 수는 %d이며, 가장 작은 수는 %d입니다.\n", b, a);
		else if (c < a && c < b)
			printf("가장 큰 수는 %d이며, 가장 작은 수는 %d입니다.\n", b, c);
		else if (b < c)
			printf("가장 큰 수는 %d이며, 가장 작은 수는 %d입니다.\n", c, a);
	}
	else if (a < c)
	{
		if (b < c && b < a)
			printf("가장 큰 수는 %d이며, 가장 작은 수는 %d입니다.\n", c, b);
		else if (b < c && a < b)
			printf("가장 큰 수는 %d이며, 가장 작은 수는 %d입니다.\n", c, a);
		else if (c < b)
			printf("가장 큰 수는 %d이며, 가장 작은 수는 %d입니다.\n", b, a);
	}
	else if (b < c)
	{
		if (a < c && b < a)
			printf("가장 큰 수는 %d이며, 가장 작은 수는 %d입니다.\n", c, b);
		else if (a < c && a < b)
			printf("가장 큰 수는 %d이며, 가장 작은 수는 %d입니다.\n", c, a);
		else if (c < a)
			printf("가장 큰 수는 %d이며, 가장 작은 수는 %d입니다.\n", a, b);
	}
	else if (a == b || a == c || c == b)
		printf("각각 다른 정수 세 개를 입력해주세요.\n");
	else
		printf("각각 다른 정수 세 개를 입력해주세요.\n");

	return 0;
}