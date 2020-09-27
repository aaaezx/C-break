#include <stdio.h>
int main() {
	int a, b, c;
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);
	int num = a * b * c;
	int output;
	int zero=0, one=0, two=0, three=0, four=0, five=0, six=0, seven=0, eight=0, nine=0;
	while (num != 0)
	{
		output = num % 10;
		num = num / 10;
		if (output == 0)
			zero++;
		if (output == 1)
			one++;
		if (output == 2)
			two++;
		if (output == 3)
			three++;
		if (output == 4)
			four++;
		if (output == 5)
			five++;
		if (output == 6)
			six++;
		if (output == 7)
			seven++;
		if (output == 8)
			eight++;
		if (output == 9)
			nine++;
	}
	printf("%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n%d\n", zero, one, two, three, four, five, six, seven, eight, nine);

	return 0;

}