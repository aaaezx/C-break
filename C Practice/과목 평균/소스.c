#include <stdio.h>
int main()
{
	double kor, mat, eng, att;
	char name[10];
	printf("학생의 이름 : ");
	gets(name);
	printf("국어 : ");
	scanf_s("%lf", &kor);
	printf("영어 : ");
	scanf_s("%lf", &eng);
	printf("수학 : ");
	scanf_s("%lf", &mat);
	printf("출결 : ");
	scanf_s("%lf", &att);
	printf("-------------------------\n\n");
	double i = (kor + mat + eng + att) / 4;
	if (i >= 70 && att >= 80)
	{
		printf("[%s]학생>> 합격!\n\n", name);
	}
	else
		printf("[%s]학생>> 불합격!\n\n", name);

	printf("-------------------------\n\n");
	printf("네 과목의 평균 : %.1lf\n", i);
	printf("출결 점수 : %.0lf\n\n", att);
	printf("-------------------------\n\n");

	return 0;
}