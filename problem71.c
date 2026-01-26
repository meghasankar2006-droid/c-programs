#include <stdio.h>

int main() {
   char val;
   scanf("%c",&val);
   if(val>=48 && val<=57){
       printf("Digit");
   }
   else{
       printf("Not a Digit");
   }
    
    return 0;
}
