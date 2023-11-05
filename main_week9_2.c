#include <stdio.h>
#include <stdlib.h>

#define ROWS	3
#define COLS	3

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void addMatrix(int A[][COLS], int B[][COLS])
{
	//C = A + B : for
	int c[3][3];
	int i, j;
	for(i=0;i<ROWS;i++)
		for(j=0;j<COLS;j++)	
			c[i][j] = A[i][j] + B[i][j];
}

void printMatrix(int A[][COLS]) 
{	
	//for - A의 요소를 각자 출력 
	int c[3][3];
	int i, j;
	for(i=0;i<ROWS;i++)
		{
			for(j=0;j<COLS;j++)
				printf("%d\t", c[i][j]);
		printf("\n");
		}
}

int main(int argc, char *argv[]) {
	int A[ROWS][COLS] = {
	{2, 3, 0},
	{8, 9, 1},
	{7, 0, 5}};
	int B[ROWS][COLS] = {
	{1, 0, 0},
	{0, 1, 0},
	{0, 0, 1}};
	int C[ROWS][COLS];
	
	addMatrix (A, B);
	printMatrix(C);
	
	system("PAUSE");
	return 0;
}
