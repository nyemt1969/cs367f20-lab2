//lab2
//blastoff.c
//Author: John(Jay) Therrien
//Date: 10/14/20

#include<stdio.h>

int main(void)
{

//variable to count-down value = 10
const int countdown = 10;

	//for loop countdown
	for(int i = countdown ; i >= 0; i--)
	{
		printf("%d\n", i); 
	}
	printf("BLAST OFF\n");


	return 0;
}
