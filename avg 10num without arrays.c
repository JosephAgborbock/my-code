//Program to find average of 10 numbers without using arrays
#include<stdio.h>
#include<math.h>
int main(void){
	float temp, sum=0;
	const int total=10;
	int i;
	for(i=0;i<total;i++){
		printf("Enter nnumber %d:",i+1);
		scanf("%f",&temp);
		if(temp==abs(temp))
		sum+=temp;
		else{
			printf("The average of the %dnumbers is %f",i,sum/total);
			return 0;
		}
	}
	  printf("The average of the %d numbers is %f",i,sum/total);
	  return 0;
}
