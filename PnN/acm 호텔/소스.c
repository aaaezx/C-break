#include <stdio.h>
int main() {
	int input, floor, num, guest;
	scanf_s("%d", &input);
	while (input--)
	{
		scanf_s("%d%d%d", &floor, &num, &guest);
		int room = 0;
		if (floor == guest)
			room = (floor * 100) + 1;
		else if (floor > guest)
			room = (guest * 100) + 1;
		else if (floor < guest)//floor < guest
		{
			room = ((guest % floor) * 100) + ((guest / floor) + 1);
			if (guest % floor == 0)
			{
				room = (floor * 100) + (guest / floor);
			}
		}
		printf("%d\n", room);
	}

	return 0;
}