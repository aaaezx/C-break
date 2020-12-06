#include <stdio.h>
#include <string.h>
void delete_a_char(char* str, char delete){
	for (int i = 0; i < strlen(str); i++){ //문자를 찾아냄
		if (str[i] == delete){ //문자가 있다
			for (int j = i; j < strlen(str); j++){ //있는 문자열부터 끝까지
				str[j] = str[j + 1]; //하나씩 땡기고
			}
			break; //끝냄 얘는 한번만 제거할거니까
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