#include<stdio.h>
int main(){

	int n,c,k;
	printf("Enter an interger in decimal number system\n");
	scanf("%d",&n);
	printf("binary number system is:\n");
	
	
	for (c=3;c>=0;c--){
	    
	    k=n>>c;
	 if (k & 1)
	 printf("1");
	  
	   else
	       printf("0");
	}
	
	    printf("\n");
	      
	       return 0;
	
	 }
