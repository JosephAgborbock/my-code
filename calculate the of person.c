/*calculate the age of person after giving the date of birth */
#include<stdio.h>
#include<time.h>
int main(){
	char x[100],y[100];
	int dd,mm,yy;
	int bd,bm,by;
	int nd,nm,ny;
	
	int t;
	struct tm*mytime;
	t=time(0);
	mytime=localtime(&t);
	
	dd=mytime->tm_mday;
	mm=mytime->tm_mon+1;
	yy=mytime->tm_year+1900;
	printf("Enter birth day,mon and year:");
	scanf("%d%d%d",&bd,&bm,&by);
	if(dd>=bd)
             nd=dd-bd;
        else
            if(mm==1||mm==3||mm==5||mm==7||mm==8||mm==10||mm==12)
        {
        	dd=dd+31;
        	nd=dd-bd;
        }
         else
               if(mm==4||mm==6||mm==9||mm==11)
               {
               	dd=dd+30;
               	nd=dd-bd;
               }
               
          else
              if(mm==2)
              {
              	dd=dd+28;
              	nd=dd-bd;
              }
              if(mm>=bm)
          {
          	mm=mm-bm;
          }
            else
               {
               	mm=mm+12;
               	yy=yy-1;
               	nm=mm-bm;
               }
                ny=yy-by;
                 printf("%d%d%d\n",ny,nm,nd);
                  
                  return 0;
}
