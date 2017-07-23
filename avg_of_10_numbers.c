//Program to find the average of 10 numbers with arrays
#include<stdio.h>
#define TOTAL 10
int main(void){
	signed int numbers[10];
	int i,j;
	float sum=0;
	printf("Enter 10 scores\n");
	 
	 for(i=0;i<TOTAL;i++){
	 	printf("Enter score %d:",i+1);
	 	scanf("%d", &numbers[i]);
	 	if(numbers[i]!=abs(numbers[i])){
	 		for(j=0;j<i;j++)
	 		sum+=numbers[j];
	 		printf("The average of the %d score is %.2f",i,sum/TOTAL);
	 		end(0);
	 	}
	 }
	  for(i=0;i<TOTAL;i++)
	   sum+=numbers[i];
	   printf("The average of the %d scores is %.2f",i,sum/TOTAL);
	   
	      return 0;
}
