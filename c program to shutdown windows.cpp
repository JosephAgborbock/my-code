#include<stdio.h>
#include<stdlib.h>
int main()
{
	char ch;
	printf("Do you want to shutdown you computer now (y/n)\n");
	
	scanf("%c", &ch);
	
	if(ch=='y'||ch=='Y')
	
	system("c:\\WINDOWS\\system32\\shutdown /s");
	
	   return 0;
	   
}																									
