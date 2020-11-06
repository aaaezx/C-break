#include <stdio.h>
int main(){
	int userinput, userinput_2;
	int comeputanswer;
	int comeputinput = 0, comeputinput_2 = 0;
	int useranswer;
	while (1){
		printf("[user] : it's my turn !\n");
		scanf_s("%d%d", &userinput, &userinput_2);
		comeputanswer = userinput*userinput_2;
		printf("[comeputer] : %d\n", comeputanswer);
		comeputinput = rand() % 9 + 1;
		comeputinput_2 = rand() % 9 + 1;
		printf("[comeputer] : %d X %d = ?\n", comeputinput, comeputinput_2);
		scanf_s("%d", &useranswer);
		if (useranswer != comeputinput*comeputinput_2)
			break;
	}
	return 0;
}