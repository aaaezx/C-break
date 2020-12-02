#include <stdio.h>
struct person{
	int age;
};
int main(){
	struct person user[10];
	for (int i = 0; i < 10; i++){
		scanf_s("%d", &user[i].age);
	}
	int old = user[0].age;
	for (int i = 1; i <= 10; i++){
		if (old < user[i].age)
			old = user[i].age;
	}
	printf("%d\n", old);

	return 0;
}