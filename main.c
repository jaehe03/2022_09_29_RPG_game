/*
* Author : Jang Jaehee
* Date : 2022_09_29
* Description : Basic RPG game
* Patch note : 
*	1. function (2022_10_06)
*	2. introducing pointer variables. (2022_10_20)
*/

#include "game.h"

int main()
{
	int player_hp;
	int player_att;
	int player_def;

	int monster_hp;
	int monster_att;
	int monster_def;

	init_game(&player_hp, &player_att, &player_def, &monster_hp, &monster_att, &monster_def);
	run_game(&player_hp, &player_att, &player_def, &monster_hp, &monster_att, &monster_def);

	return 0;
}