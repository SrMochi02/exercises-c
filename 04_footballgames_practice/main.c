#include <stdio.h> 

#define MAX_GAMES 10
#define GOALS_POINTS 10
#define ASSISTANTS_POINTS 5
#define SAVES_POINTS 2
int points_of_game (int goals, int assistants, int saves);

int main(void) {

	int plays_of_week = 0;
	int goals = 0;
	int assistants = 0;
	int saves = 0;
	int counter = 0;
	
	int max_scores_games [MAX_GAMES];

	do {
		printf("Insert quantity of plays in the week\n");
		scanf("%d", &plays_of_week);
	} while (plays_of_week <= 0 || plays_of_week > MAX_GAMES);

	for (counter = 0; counter < plays_of_week; counter++) {

		do {
			printf("Insert the goals in game\n");
			scanf("%d", &goals);

			if(goals < 0){
				printf("The value entered is invalid \n");
				printf("please try again insert correct values\n");
			}
		} while (goals <= 0);

		do {
			printf("Insert the assistants in game\n");
			scanf("%d", &assistants);

			if(assistants < 0) {
				printf("The value entered is invalid\n");
				printf("please try again insert correct values\n");
			}
		} while (assistants <= 0);

		do {
			printf("Insert the saves in game\n");
			scanf("%d", &saves);

			if(saves < 0) {
				printf("The value entered is invalid\n");
				printf("please try again insert correct values\n");
			}
		} while (saves <= 0);



	}
	return 0;

}


int points_of_game (int goals, int assistants, int saves){

	int total_score = (goals * GOALS_POINTS + assistants * ASSSISTANTS_POINTS,
			saves * SAVES_POINTS);

	return total_score;
} 



