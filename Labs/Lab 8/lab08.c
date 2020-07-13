#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define max 100
void squeeze( char c, char S[] );
void printBackwards( char S[] );

int main() 
{
	char ch;
	char str[max];

	printf("Enter a character:");
	ch = getchar();

	printf("Enter a string max 99 characters: ");
	scanf(" %[^\n]s", str);

	squeeze( ch, str );

	printBackwards( str );

return 0 ;
}

void squeeze( char c, char S[] )
{

	for(int i = 0; i < max; i++)
	{		
		if(S[i] == c)
		{
			while(S[i])
				{		
					S[i] = S[i+1];
					i++;
				}
			i = 0;
		}		
	}

	int len = strlen(S);

	if(len == 1)
	{
		if(S[0] == c)
		{	
			S[0] = '\0';
		}
	}

	printf("FWD:%s:\n", S);
}

void printBackwards( char S[] )
{

	int start = 0;
	int end = strlen(S) - 1;

	while(end > start)
	{
		char temp = S[start];
		S[start] = S[end];
		S[end] = temp;
		start++;
		end--;
	}	

	printf("BWD:%s:\n", S);
}
