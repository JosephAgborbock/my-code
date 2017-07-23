#include<stdio.h>
#include<stdlib.h>
int main(){
	int y,m,d;
	int y1,m1,d1;
	int y2,m2,d2;
	printf("Enter the current year as y/m/d\n");
	scanf("%d/d%/%d",&y,&m,&d);
	printf("Enter your birthday as y/m/d\n");
	scanf("%d/%d/%d",&y1,&m1,&d1);
	y2=y-y1;
	m2=m-m1;
	d2=d-d1;
	printf("You are %d year old,y2\n");
	printf("You are %d month old,m2\n");
	printf("You are %d day old,d2\n");
	
	system(pause);
	 return 0;
}
