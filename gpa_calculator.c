/*     ***GPA CALCULATOR***
*Calculates GPA
#Method of Calculation:
SUM_OF_ALL(GRADE_POINT*CREDIT_VALUE)/SUM_OF_CREDIT_VALUES
DATE:16-07-2016
VERSION:1.0
BY:TIKU JOSEPH A.
MONITORED:Fon E. Noel N.
*/
#include <stdio.h>
//Function prototypes
void menu();//Function to interact with user and get details
void grade(float mark, int course, int student); //Function to return grade for a particular mark,course,and student
void print_grades();//Function prints grades for all students
void calculate(); //Calculate call the grade function n times to grade all students
void compute_gpas(); //Function incharge for calculating GPA
void print_gpas(); //Function displays all GPA's
void total_credits(); //Function sums all the credit values entered into the system.

//Global variables
float ca_scores[100][100],exam_scores[100][100], gpas[100];
int   grades[100][100], credit_values[100], no_courses, no_students, i, j, total_credit=0;
float grade_points[8]={4,3.5,3,2.5,2,1.5,1,0.5};
char  courses[100][100];
int main(void){
        menu();
        calculate();
        print_grades();
        total_credits();
        compute_gpas();
        print_gpas();
		
}

void menu(){
	printf("Enter number of course:");
	scanf("%d", &no_courses);
	printf("Enter number of students:");
	scanf("%d", &no_students);
	printf("\n================================================\n");
	fflush(stdin);
	
		for(i=0;i<no_courses;i++){
		printf("\nEnter course %d:", i+1);
	    fgets(courses[i],25, stdin);
	    fflush(stdin);
	    printf("Enter credit value for %s:", courses[i]);
	    scanf("%d", &credit_values[i]);
		fflush(stdin);	
	}
	
}
void calculate(){
	
	    fflush(stdin);
		for(i=0;i<no_courses;i++){
		printf("\nEnter Marks for course %s\n------------------------------\n", courses[i]);
		for(j=0;j<no_students;j++){
		printf("Enter CA score of student %d :", j+1);
	    scanf("%f", &ca_scores[i][j]);	
	    printf("Enter EXAM score of student %d :", j+1);
	    scanf("%f", &exam_scores[i][j]);
	    grade(ca_scores[i][j]+exam_scores[i][j], i, j);
	    
	   // ca_scores[i][j]=temp;
			
      	}
        }
}
void grade(float mark, int course, int student){
	if(mark>=80&&mark<101)
	grades[course][student]=1;
	else if(mark>=70&&mark<80)
	grades[course][student]=2;
	else if(mark>=60&&mark<70)
	grades[course][student]=3;
	else if(mark>=55&&mark<60)
	grades[course][student]=4;
	else if(mark>=50&&mark<55)
	grades[course][student]=5;
	else if(mark>=45&&mark<50)
	grades[course][student]=6;
	else if(mark>=40&&mark<45)
	grades[course][student]=7;
	else if(mark>=0&&mark<40)
	grades[course][student]=8;
	else grades[course][student]=0;
}
void print_grades(){
	
for(i=0;i<no_courses;i++){
	printf("\n\nGrades for Course : %s\n===============================\n", courses[i]);
	for(j=0;j<no_students;j++){
		printf("Grade for student %d:", j+1);
		switch(grades[i][j]){
	    case 1: printf("A\n"); break;
	    case 2: printf("B+\n"); break;
	    case 3: printf("B\n"); break;
	    case 4: printf("C+\n"); break;
	    case 5: printf("C\n"); break;
	    case 6: printf("D+\n"); break;
	    case 7: printf("D\n"); break;
	    case 8: printf("F\n"); break;
	    default: printf("Invalid Scores:No grade Available\n");
	    break;
		}
		
	}
}	
		
}
void compute_gpas(){
	float grade, grade_point, w_points;
	
		for(j=0;j<no_students;j++){
			for(i=0;i<no_courses;i++){
				
				
				if(grades[i][j]==1){
				grade_point=grade_points[0];		
				}
				else if(grades[i][j]==2){
				grade_point=grade_points[1];		
				}
				else if(grades[i][j]==3){
				grade_point=grade_points[2];		
				}
				else if(grades[i][j]==4){
				grade_point=grade_points[3];		
				}
				else if(grades[i][j]==5){
				grade_point=grade_points[4];		
				}
				else if(grades[i][j]==6){
				grade_point=grade_points[5];		
				}
				else if(grades[i][j]==7){
				grade_point=grade_points[6];		
				}
				else if(grades[i][j]==8){
				grade_point=grade_points[7];		
				}
				//printf("grade point:%f grade:%d ",grade_point,grades[i][j]);
			   w_points += (float)credit_values[i]* (float)grade_point;	
				
		}
		//printf("w_points:%f total_credit:%d:",w_points, total_credit);
		//printf("GPA:%f",w_points/(float)total_credit);
		gpas[j]  = w_points/total_credit;
	}

	
}
void print_gpas(){
printf("\nGPA RESULTS\n----------------------------\n");	
for(i=0;i<no_students;i++)
printf("GPA for Student %d : %f", i+1, gpas[i]);
}
void total_credits(){
	for(i=0;i<no_courses;i++)
	total_credit += credit_values[i];
	
}

