#include <stdio.h>

int main() {
   int n1,n2;
   scanf("%d %d",&n1,&n2);
   int op;
   printf("1.Add ,2.Sub ,3.Mul,4.Div,5.Mod");
   scanf("%d",&op);
   switch(op){
       case 1:
       printf("%d",n1+n2);
       break;
       case 2:
       printf("%d",n1-n2);
       break;
       case 3:
       printf("%d",n1*n2);
       break;
       case 4:
       printf("%d",n1/n2);
       break;
       case 5:
       printf("%d",n1%n2);

   }
    
    return 0;
}
