#include<stdio.h>
int main() {
	char a, num;
	a = getchar(), num=getchar();
	double credit = 0;
	if (a == 'A')
		credit += 4;
	else if (a == 'B')
		credit += 3;
	else if (a == 'C')
		credit += 2;
	else if (a == 'D')
		credit += 1;
	else if (a == 'F')
		credit = 0.0;
	if (num == '+')
		credit += 0.3;
	else if (num == '0')
		credit += 0.0;
	else if (num == '-')
		credit -= 0.3;

	printf("%.1lf", credit);

	return 0;
}