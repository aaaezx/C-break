#include <stdio.h>
#include <string.h>
void delete_a_char(char* str, char delete){
	for (int i = 0; i < strlen(str); i++){ //���ڸ� ã�Ƴ�
		if (str[i] == delete){ //���ڰ� �ִ�
			for (int j = i; j < strlen(str); j++){ //�ִ� ���ڿ����� ������
				str[j] = str[j + 1]; //�ϳ��� �����
			}
			break; //���� ��� �ѹ��� �����ҰŴϱ�
		}
	}
}
void delete_chars(char* str, char delet){
	for (int i = 0; i < strlen(str); i++){
		if (str[i] == delet){
			for (int j = i; j < strlen(str); j++){
				str[j] = str[j + 1];
			}
		}
	}
}
int main(){
	char str[80];
	gets(str);
	delete_a_char(str, 'o');
	puts(str);
	delete_chars(str, 'g');
	puts(str);

	return 0;
}