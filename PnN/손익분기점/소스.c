#include <stdio.h>
int main() {
	long fix, pro, price;
	scanf_s("%d%d%d", &fix, &pro, &price);

	long sales = 0;
	if (pro >= price)
		printf("-1");
	else
	{

		while (1)
		{
			if (pro != price && fix > 0)
			{
				sales = fix / (price - pro);
				if (fix + pro * sales >= price * sales)
				{
					printf("%d", sales + 1);
					break;
				}
			}

		}
	}

	return 0;
}