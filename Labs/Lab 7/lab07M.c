/*Source: lab07M.c */
#include <stdio.h>
#include <stdlib.h>
#include "lab07F.h"

int main(void){
int num;

scanf("%d", &num);
getNumber(num);


if(num>0)
{

	for(int i=0; i<num; i++)
	{	
		int value;
		scanf("%d", &value);

		findMax(value);
		findMin(value);
		findTotal(value);
		findAverage(value);
	}

	printLine();
	printFirst();
	printSecond();
	printThird();
	printFourth();
	printFifth();
	printLine();
	exit(1);
}
else
	{
		printLine();
		printFirst();
		printLine();
		exit(0);
	}
}
