#include <stdio.h>
int main()
{
	int pizza, piece, people;
	printf("���ڴ� �� ���� ������ �ֳ���? ");
	scanf_s("%d", &pizza);
	piece = pizza * 8;
	printf("�Դ� ����� �� ���ΰ���? ");
	scanf_s("%d", &people);
	if (piece / people != 0)
	{
		printf("������� %d������ ���� �� �ְڱ���!\n ���� ���������� %d�ǽ��Դϴ�.\n",
			piece / people, piece % people);
	}
	else
		printf("�� �� �����?\n");

	return 0;
}