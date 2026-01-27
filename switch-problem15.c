#include<stdio.h>
int main(){
    int mode;
    char category;
    scanf("%d %c",&mode,&category);
    switch(mode){
    case 1:
        if(category=='r'|| category=='R'){
            printf("%d",5000);
        }
        else if(category=='S'|| category=='s'){
            printf("%d",3000);
        }
        else{
            printf("invalid categories");
        }
        break;
    case 2:
        if(category=='r'|| category=='R'){
            printf("%d",9000);
        }
        else if(category=='S'|| category=='s'){
            printf("%d",7000);
        }
        else{
            printf("invalid categories");
        }
        break;
    default:
        printf("invalid option");
    }
    return 0;
}