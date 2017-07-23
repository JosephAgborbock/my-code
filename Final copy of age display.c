#include<stdio.h>
#include<stdlib.h>
int main(){
	int y,m,d;
	int y1,m1,d1;
	int y2,m2,d2;
	printf("Enter the current year as y/m/d\n");
	scanf("%d/d%/%d",&y,&m,&d);
	fflush(stdin);
	printf("Enter your birthday as y/m/d\n");
	scanf("%d/%d/%d",&y1,&m1,&d1);
	y2=y-y1;
	m2=m-m1;
	d2=d-d1;
	printf("You are %d year old\n",y2);
	printf("You are %d month old\n",m2);
	printf("You are %d day old\n",d2);
	
	system("pause");
	return 0;
}
