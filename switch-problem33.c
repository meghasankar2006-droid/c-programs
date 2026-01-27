#include<stdio.h>
int main(){
    int book,ld;
    scanf("%d %d",&book,&ld);

    switch(book){
    case 1:
        printf("Late fees: %d",ld*2);
        break;
    case 2:
         printf("Late fees: %d",ld*5);
        break;
    default:
        printf("Invalid Input");

    }
    return 0;
}