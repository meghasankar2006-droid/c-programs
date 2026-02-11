//Find Maximum of Two Numbers Using Function
#include <stdio.h>
int Max_val(int x,int y){
    if(x>y){
        return x;
    }
    else if(x==y){
        return x;
    }
    else {
        return y;
    }
}
int main(){
    int n1;
    int n2;
    scanf("%d %d",&n1,&n2);
    int ans=Max_val(n1,n2);
    printf("%d",ans);

    
}