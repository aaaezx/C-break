#include <stdio.h>
int main()
{
	double kor, mat, eng, att;
	char name[10];
	printf("�л��� �̸� : ");
	gets(name);
	printf("���� : ");
	scanf_s("%lf", &kor);
	printf("���� : ");
	scanf_s("%lf", &eng);
	printf("���� : ");
	scanf_s("%lf", &mat);
	printf("��� : ");
	scanf_s("%lf", &att);
	printf("-------------------------\n\n");
	double i = (kor + mat + eng + att) / 4;
	if (i >= 70 && att >= 80)
	{
		printf("[%s]�л�>> �հ�!\n\n", name);
	}
	else
		printf("[%s]�л�>> ���հ�!\n\n", name);

	printf("-------------------------\n\n");
	printf("�� ������ ��� : %.1lf\n", i);
	printf("��� ���� : %.0lf\n\n", att);
	printf("-------------------------\n\n");

	return 0;
}