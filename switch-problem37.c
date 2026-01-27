#include<stdio.h>
int main(){
    int course;
    scanf("%d",&course);
    switch(course){
    case 1:
        printf("Certificate Fee ₹0");
        break;
    case 2:
        printf("Certificate Fee ₹500");
        break;
    
    default:
        printf("Invalid Input");

    }
    return 0;
}