#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

void countAlphabets(char , int*);

int main() {
	int i = 0;
	char str[1000];
	int alphabets = 0; 
	scanf("%[^\n]", &str);
	
	for (int i = 0; i < strlen(str); i++)
	{
		countAlphabets(str[i],&alphabets);
	}
	printf("%d", alphabets);

}



void countAlphabets(char str, int* alphabets)
{
		if ((str >= 'A' && str <= 'Z') || (str >= 'a' && str <= 'z'))

		{
			++*alphabets ;
		}
}