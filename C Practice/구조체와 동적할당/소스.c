#include <stdio.h>
struct person{
	char name[7];
	int age;
};
int input(struct person input[]){
	for (int i = 0; i < 3; i++){
		printf("%d. name : ", (i + 1));
		scanf("%s", input[i].name);
		printf("%d. age : ", (i + 1));
		scanf_s("%d", &input[i].age);
	}
}
int output(struct person output[]){
	for (int i = 0; i < 3; i++){
		printf("%d. ", (i + 1));
		printf("%s, %d\n", output[i].name, output[i].age);
	}
}
int main(){
	struct person result[3];
	input(result);
	output(result);
	return 0;
}