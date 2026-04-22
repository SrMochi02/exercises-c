#include <stdio.h>

#define MAX_GAMES 10

int points_of_game (int goals, int assistants, int saves);

int main(void) {

	int plays_of_week = 0;
	int goals_ingame = 0;
	int assistants_ingame = 0;
	int saves_ingame = 0;

	int goals_points = 10;
	int assistants_points = 5;
	int saves_points = 2;
	
	int max_scores_games [MAX_GAMES];

	return 0;

}


int points_of_game (int goals, int assistants, int saves){

	int total_score = (goals_ingame * goals_points, assistants_ingame * assistants_points,
			saves_ingame * saves_points);

	return total_score;
} 



