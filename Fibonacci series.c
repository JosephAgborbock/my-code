#include<stdio.h>
#include<stdlib.h>
#define MAX 100
long Fib[MAX];
int i,N;
int main(){
	printf("Enter N\n");
	scanf("%d",&N);
	i=2;
	Fib[0]=1,Fib[1]=1;
	
	printf("%s","1,1");
	 
	 while(i<N){
	 	Fib[i]=Fib[i-1]+Fib[i-2];
	 	printf("%d",Fib[i++]);
	 }
	    return 0;
}

