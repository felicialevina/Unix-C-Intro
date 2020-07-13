#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>



void incF( int *num, int incval);
int checkInt(char *c);

int main(int argc, char *argv[])
{
	int val, input;

	if(argc != 2)
	{
		fprintf(stderr, "%s: Invalid number of arguments\n", argv[0]);
		return 1;
	}

	if(checkInt(argv[1]) == 1)
	{
		fprintf(stderr, "%s: Please enter an integer argument\n", argv[0]);
		return 1;
	}

	val = atoi(argv[1]);

	printf("Enter an integer: ");
	
	while(scanf("%d", &input) != EOF)
	{
		int *p = &input;
		incF(p, val);		

		printf("Enter an integer: ");
	}	
	return 0;
}

void incF(int *num, int incval)
{
	int total = *num + incval;
	printf("%d\n", total);
}

int checkInt(char *c)
{
	int i;
	if(c[0] == '-')
	{
		i = 1;
	}
	else
	{
		i = 0;
	}

	while(i < strlen(c))
	{
		if(!(c[i] >= 48 && c[i] <= 57))
		{
			return 1;
		}

		i++;
		return 0;
	}
}




