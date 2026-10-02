#include <stdio.h>

void clear_buffer(void) {
    int c;
    while((c = getchar()) != '\n' && c != EOF);
}
int main(void)
{
    char name[50];
    char reg_no[20];
    double marks;
    char grade;
    const char *pass_fail;

    unsigned int student_count;

    printf("Enter number of students: ");
    if(scanf("%u", &student_count) != 1){
        printf("Invalid count!\n");
        return 1;
    }
    for(unsigned int count = 0; count < student_count; count++){
        printf("Enter student's name: ");
        if(scanf(" %s", name) != 1) {
           printf("Invalid name!\n");
           clear_buffer();
           return 1;
        }
        printf("Enter student's registration number: ");
        if(scanf(" %s", reg_no) != 1) {
            printf("Invalid reg no.\n");
            clear_buffer();
            return 1;
        }
        printf("Enter student's marks: ");
        if(scanf("%lf", &marks) != 1){
            printf("Invalid marks!\n");
            clear_buffer();
            return 1;
        }
        if(marks >= 70 && marks <= 100){
            grade = 'A';
        }
        else if(marks >= 60 && marks <= 69) {
            grade = 'B';
        }
        else if(marks >= 50 && marks <= 59) {
            grade = 'C';
        }
        else if(marks >= 40 && marks <= 49) {
            grade = 'D';
        }
        else {
            grade = 'F';
        }
        if (marks >= 40){
            pass_fail = "PASS";
        } else {
            pass_fail = "FAIL";
        }
        printf("\n-----------------------------------------\n");
        printf("\n\t Student Information \t\n");
        printf("\n-----------------------------------------\n");
        printf("\nRegistration number: \t%s\n", reg_no);
        printf("\nName: \t%s\n", name);
        printf("\nGrade: \t%c\n", grade);
        printf("\n %s\n", pass_fail);
        printf("\n-----------------------------------------\n");
    }

    return 0;
}
