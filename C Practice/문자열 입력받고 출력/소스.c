#include <stdio.h>
int main(){
	char *arr[3][100];
	for (int i = 0; i < 3; i++){
		gets(arr[i]);
	}
	int num;
	scanf_s("%d", &num);
	if (1 <= num <= 3){
		printf("%s\n", arr[num - 1]);
	}
	else
		printf("Please write one to three.\n");
	return 0;
}