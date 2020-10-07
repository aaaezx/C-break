#include <stdio.h>
int main() {
	int a, b, c, d;
	scanf_s("%d%d%d", &a, &b, &c);
	scanf_s("%d", &d);
	int time, hour, min, sec;
	time = (a * 3600) + (b * 60) + c + d;
	hour = time / 3600;
	min = time % 3600 / 60;
	sec = time % 3600 % 60;
	if (hour > 23)
		hour = hour % 24;
	printf("%d %d %d\n", hour, min, sec);
	return 0;
}