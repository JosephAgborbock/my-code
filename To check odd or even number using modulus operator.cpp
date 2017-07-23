#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n,x;
	printf("Enter an integer\n");
	scanf("%d",&n);
	x=n/2;
	if(x!=0){
	
	if(n%2==0)
	 printf("Even\n");
	
	else
	  printf("odd\n");
	
	}  
	else
	   printf("Enter a valid number");
	   return 0;
}
