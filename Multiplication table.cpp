#include<stdio.h>
#include<stdlib.h>
int main(){
 int n,ip;
 printf("enter the value you want it's multiplication from 1-12\n");
 
 scanf("%d",& n);
   for (int i=1;i<13;i++){
   	ip=i* n;
   	 printf("%d * %d = %d\n",n,i,ip);
   	 
  } 
   
	  return 0;
}

