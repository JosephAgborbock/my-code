#include<stdio.h>
#include<math.h>
int main(void){
	float marks[]={10.0,20.0,30.0,35.5};
	float sum=0;
	for(int i=0;i<4;i++){
	  sum+=marks[i];
	}
	printf("The sum of the array is%f",sum);
	
	  return 0;
}
