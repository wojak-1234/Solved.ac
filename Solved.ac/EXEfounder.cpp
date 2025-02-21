#include<stdio.h>
#include<string.h>
#include<conio.h>
int main1()
{
	int a;
	char stand[100]="";
	char input[100]="";
	scanf_s("%d", &a);
	gets_s(input);
	strcpy_s(stand, input);
	for (int k = 0; k < a-1; k++)
	{
		gets_s(input);
		for (int p = 0; p < strlen(stand); p++)
		{
			if (stand[p] != input[p])
			{
				stand[p] = '?';
			}
		}
	}
	for (int i = 0; i < strlen(stand); i++)
	{
		printf("%c", stand[i]);
	}
	return 0;
}