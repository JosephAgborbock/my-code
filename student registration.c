#include <stdio.h>
#define max_str 150
 //Function prototypes
 void display_menu();
 void get_students();
 void list_students();
 void make_payment();
 void transit();
 void init();
 //Variable Declarations
 char choice;
 char students[10][max_str+1];
 char *status;
 float  fees[10], temp; int i,no, id;
 
 int main(void) {
     
     display_menu();
      
     
     return 0;   
 }
 void init(){
    for(i=0;i<10;i++)
        fees[i]=0;
 }
 void display_menu(){
     printf("Press 1 to register students.\n");
     printf("Press 2 to view student list.\n");
     printf("Press 3 to pay fees.\n");
     printf("Choice :");
     scanf("%c", &choice);
     switch(choice){
         case '1': {get_students(); transit(); main(); }
         case '2': {list_students(); transit(); main();}
         case '3': {make_payment(); transit(); main();}
         default: {
             printf("Wrong Choice, Exiting....\n");
             break;
         }
    }
    
 }
  void get_students(){
     
     printf("Enter number of students :");
     scanf("%d", &no);
     fflush(stdin);
     getchar();
     for(i=0;i<no;i++) {
       
     printf("Student Name %d:", i+1);
     fgets(students[i],max_str,stdin);
     
     } 
     printf("\nAll registrations done\n\n");
 
  }
  void list_students(){
      
       printf("\n\nRegNo%15s%10s%20s\n==================================================\n","Fee", "Paid", "Name");
       
        for(i=0;i<no;i++) {
            if(fees[i]>0)
                status="Yes";
            else    status="No";
         printf("%d%20f%10s%20s\n",i+1,fees[i],status, students[i]);
        }
       printf("\n\n");
  }
  void make_payment() {
     printf("Enter student id :");
      scanf("%d", &id);
      printf("You are about to pay fees for :%s\n",students[id-1]);
      printf("Enter amount :");
      scanf("%f", &temp);
      fees[id-1]=temp;
      printf("Payment Received :).\n\n");
      
	       
  }
  void transit(){
      printf("Press any key...");
      getchar();
      printf("\n\n");
  }
