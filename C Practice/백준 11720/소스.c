#include <stdio.h>
int main(){
	int num;
	int sum = 0;
	int input[100];
	scanf_s("%d", &num);
	for (int i = 0; i < num; i++){
		scanf_s("%1d", &input[i]);
		sum += input[i];
	}
	printf("%d\n", sum);
}