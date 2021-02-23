#include <stdio.h>
void output(int a){
	int student, score[1000], cnt = 0;
	double sum = 0;
	for (int i = 0; i < a; i++){
		cnt = 0;
		sum = 0;
		scanf_s("%d", &student);
		for (int j = 0; j < student; j++){
			scanf_s("%d", &score[j]);
			sum += score[j];
		}
		sum = sum / student;
		for (int k = 0; k < student; k++){
			if (sum < score[k])
				cnt++;
		}
		printf("%.3lf%%\n", (double)cnt / student * 100);
	}
}
int main(){
	int num;
	scanf_s("%d", &num);
	output(num);
	return 0;
}