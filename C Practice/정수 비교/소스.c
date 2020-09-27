#include <stdio.h>
int main() {
	int a, b;
	scanf_s("%d%d", &a, &b);
	a > b ? printf(" > ") : a < b ? printf(" < ") : printf(" == ");

	return 0;
}