#include<stdio.h>
int main(){
    int student;
    scanf("%d",&student);
    switch(student){
    case 1:
        printf("Exam Fees : 1200");
        break;
    case 2:
        printf("Exam Fees : 800");
        break;
    case 3:
        printf("Exam Fees : 500");
        break;
    default:
        printf("Invalid Input");

    }
    return 0;
}