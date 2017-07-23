//Program to find the average of 10 numbers
#include <stdio.h>
#include <math.h>
int main(void){
	float mark_holder, sum=0; 
	int i;
	int count=0;
	printf("Enter 10 marks to find thier average...\n");
	for(i=0;i<10;i++){
	 printf("Enter mark number %d:", i+1);
	 scanf("%f", &mark_holder);
	 if(mark_holder==abs(mark_holder))
	 {
	 	sum+=mark_holder;
	 count++;
	 }
	 else {
	 	printf("The average of the %d numbers is %f:", i, sum/count);
	 	return 0;
	 }
	 
	}
		
   	printf("The average of the %d numbers is %f:", i, sum/10);
   	
	return 0;
}
