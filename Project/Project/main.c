#include<stdio.h>
#include<stdlib.h>
#include"Header1.h"

int main(void)
{
	int game;
	printf("�п�ܹC��,1:�׷��K�X");
	scanf_s("%d", &game);
	switch (game)
	{
	case 1:
		bingo();
		break;
	}

	printf("\n");
	return main();
}