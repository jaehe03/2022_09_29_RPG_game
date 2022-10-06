/*
* Author : Jang Jaehee
* Date : 2022_09_29
* Description : Basic RPG game
* Patch note : 
*	1. function (2022_10_06)
*/

#include "game.h"

int main()
{
	srand(time(NULL));

	while (1)
	{
		print_status(player_hp, player_att, player_def, monster_hp, monster_att, monster_def);

		int choice = print_menu();

		if (choice == 1) attack();
		else if (choice == 2) defense();
		else if (choice == 3)
		{
			printf("Bye bye!\n");
			break;
		}
		else
		{
			printf("Wrong input.\n");
			continue;
		}

		if (player_hp <= 0)
		{
			printf("You lose.\n");
			break;
		}
		else if (monster_hp <= 0)
		{
			printf("You win.\n");
			break;
		}
	}

	return 0;
}