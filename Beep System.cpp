#include<stdio.h>
#include<windows.h>

int main(){
	printf("Alarm System");
	for(int i=0;i<=50;i++){
		Beep(100,60);
		Beep(600,650);
		Beep(700,600);
		Beep(800,600);
		Beep(1000,600);
		Beep(1000000,10000);
	}
       return 0;
}
	
	 
	 	
	 	
	 	
	 	

