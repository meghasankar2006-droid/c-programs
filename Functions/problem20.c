#include <stdio.h>
int add(int a,int b){
    return a+b;

}
int sub(int a,int b){
    return a-b;

}
int mul(int a,int b){
    
    return a*b;

}
int div(int a,int b){
    
    return a/b;

}
int main(){
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    printf("1.add ,2.sub ,3.mul ,4.div");
    int num;
    scanf("%d",&num);
    if(num==1){
        printf("%d",add(n1,n2));
    }
    else if(num==2){
        printf("%d",sub(n1,n2));
    }
    else if(num==3){
        printf("%d",mul(n1,n2));
    }
    else if(num==4){
        if(n2>0)
        printf("%d",div(n1,n2));
        else
        printf("invalid input");
    }
}
