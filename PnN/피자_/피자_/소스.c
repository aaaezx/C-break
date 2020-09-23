#include <stdio.h>
int main()
{
	int pizza, piece, people;
	printf("피자는 몇 판을 가지고 있나요? ");
	scanf_s("%d", &pizza);
	piece = pizza * 8;
	printf("먹는 사람은 몇 명인가요? ");
	scanf_s("%d", &people);
	if (piece / people != 0)
	{
		printf("사람들은 %d조각씩 먹을 수 있겠군요!\n 남는 피자조각은 %d피스입니다.\n",
			piece / people, piece % people);
	}
	else
		printf("돈 좀 쓸까요?\n");

	return 0;
}