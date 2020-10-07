/*
RUNNING CODE
N:5
5 5 5 5 5 5 5 5 5
5 4 4 4 4 4 4 4 5
5 4 3 3 3 3 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 2 1 2 3 4 5
5 4 3 2 2 2 3 4 5
5 4 3 3 3 3 3 4 5
5 4 4 4 4 4 4 4 5
5 5 5 5 5 5 5 5 5


*/


#include<stdio.h>

int main()
{  
    int N;
    printf("N:");
    scanf("%d",&N);
	int a = N * 2 - 1; 
	int r[a][a]; 
		

	for(int i = 0; i < a; i++) 
	{ 
		for(int j = 0; j < a; j++) 
		{ 
			if(abs(i - a / 2) > abs(j - a / 2)) 
				r[i][j] = abs(i - a / 2) + 1; 
			else
		               r[i][j] = (abs(j-a / 2) + 1); 
			
		} 
	} 
		

	for(int i = 0; i < a; i++) 
	{ 
		for(int j = 0; j < a; j++) 
		{ 
			printf("%d",r[i][j]);
			printf(" ");
		} 
	printf("\n");
	} 
} 
