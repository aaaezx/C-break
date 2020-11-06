#include <stdio.h>
#include <string.h>
int main(){
	char name[7];
	char phone[14];
	printf("What your name? ");
	scanf("%s", name);
	printf("What your phone number? ");
	scanf("%s", phone);
	printf("My name is %s, my phone number is %s.\n", name, phone);
	
	return 0;
}