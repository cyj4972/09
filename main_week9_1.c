#include <stdio.h>
#include <stdlib.h>

#define N_STUDENT 5

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	int grade[N_STUDENT];
	int score[N_STUDENT];
	
	for(i=0;i<N_STUDENT;i++)
		grade[i] = rand() % 100 + 1;
	
	for(i=0;i<N_STUDENT;i++)
		score[i] = grade[i];
	
	for (i=0;i<N_STUDENT;i++)
		printf("score[%d] = %d (grade : %d)\n", i, score[i], grade[i]);
	
	system("PAUSE");
	return 0;
}
