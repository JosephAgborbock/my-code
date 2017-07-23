/*Calculator display*/
#include<stdio.h>
#include<math.h>
int main(){
	float x,y,z;
	char sign, Answer;
	
		printf("Please enter the first number\n");
		scanf("%d",&x);
		printf("Please enter the second number\n");
		scanf("%d",&y);
		printf("Choose any operation function\n");
		printf("+ for Adds\n");
		printf("-for Subst\n");
		printf("* for Multi\n");
		printf("/ for Div\n");
		
		sign=getchar();
	
	 switch(sign)
	 {
	 	case'+':z=x+y;
	 	printf("The Add is:%d\n",z);
	  	 break;
	  	 
        case'-':z=x-y;
	 	printf("The Subst is:%d\n",z);
	  	 break;
	  	 
	 	case'*':z=x*y;
	 	printf("The Subst is:%d\n",z);
	  	 break;
		    
	  	 case'/':z=x/y;
	 	printf("The Subst is:%d\n",z);
	  	 break; 
	  	 
	 } 
	   printf("Do you want to end this operation?(y\n)\n");
	   scanf("%z",&Answer);
	   {
	   	while(Answer!='n');
	   	 return 0;
	   }

}
