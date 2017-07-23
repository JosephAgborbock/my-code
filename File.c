#include<stdio.h>
FILE *fp;
int main(){
	fp=fopen("c:fib.txt","w");
	fprintf(fp,"%s","Hello World");
	fclose(fp);
	
	    return 0;
}
