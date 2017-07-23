#include<stdio.h>
#include<stdlib.h>
#define MAX 20
float mark; int i=0;float toatal=0.0;
int main()
{
	for(i=0;i<MAX;i++)
	{
		printf("Enter Mark%d:,i+1");
		scanf("%f",&mark);
		if(mark<0)
		{
			break;
		}
		else
		{
			total=total+ mark
		}
	}
	  printf("Average=%f",total/i)
}
