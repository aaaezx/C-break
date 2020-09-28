#include <stdio.h>
int main(){
	int num;
	scanf_s("%d", &num);
	for (int i = 1; i < 10; i++)
	{
		for (int k = 1; k <= num; k++)
			printf("%d * %d = %d\n", k, i, k*i);
		printf("\n");
	}

	return 0;
}
