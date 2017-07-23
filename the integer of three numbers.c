//program which reads three integer numbers and displays the largest number
#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	printf("Enter the integer to display the largest number\n");
	scanf("%d%d%d",&a,&b,&c);
	if(a<b)
	{
		if(b>c){
	printf("%d\t",b);
}
else{
	printf("%d\t",c);
}
	}
	else{
		if(a>c){
			printf("%d\t",a);
		}
	    else{
	    	printf("%d\t",c);
	    }
	        }
	
			 return 0;	
	
}

