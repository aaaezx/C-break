#include <stdio.h>
int main() {
	int input;
	scanf_s("%d", &input);
	int compare = -1; //0 입력시 1을 출력하기 위함.
	int cnt = 0;
	int temp = input;
	while (compare != input)
	{
		cnt++;
		int first = ((temp / 10) + (temp % 10)) % 10;
		compare = first + ((temp % 10) * 10);
		temp = compare;
	}
	printf("%d", cnt);

	return 0;
	
}