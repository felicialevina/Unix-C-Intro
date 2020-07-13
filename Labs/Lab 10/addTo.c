#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int isInt(char *S);

int main(int argc, char *argv[])
{

	if (argc != 4)
	{
		fprintf(stderr, "usage: %s <integer> <infile> <outfile>\n", argv[0]);
		exit(1);
	}

	FILE *f1;
	FILE *f2;

	char *add = argv[1];

	if(!isInt(add))
	{
		fprintf(stderr, "usage: %s <integer> <infile> <outfile>\n", argv[0]);
		exit(1);
	}

	if((f1 = fopen(argv[2], "r")) == NULL)
	{
		fprintf(stderr, "%s Not readable or does nto exist\n", argv[2]);
		exit(1);
	}

	if((f2 = fopen(argv[3], "w")) == NULL)
	{
		fprintf(stderr, "%s Not writeable or does not exist\n", argv[3]);
		exit(1);
	}

	char A[20];

	while(fgets(A,20,f1) != NULL)
	{
		int B = atoi(A) + atoi(argv[1]);
		fprintf(f2, "%d\n", B);
	}

	fclose(f1);
	fclose(f2);
}
int isInt(char *S)
{
	int ind = 0;
	
	if(S[0] == '-')
	{
		ind = 1;
	}
	else
	{
		ind = 0;
	}

	while(ind < strlen(S))
	{
		if(!(S[ind] >= 48 && S[ind] <= 57))
		{
			printf("Invalid number entered: %s\n", S);
			return 0;
		}

		ind++;
	}
	
	return 1;
}
