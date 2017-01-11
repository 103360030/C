#include<stdio.h>
#include<stdlib.h>
#include"Header1.h"

int main(void)
{
	int game;
	printf("½Ð¿ï¾Ü¹CÀ¸,1:²×·¥±K½X");
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