#include <stdio.h>
int main(){
   int mark;
   scanf("%d",&mark);
   int t=mark/10;
   switch (t)
   {
   case 10:
   case 9:
        printf("Grade A");
        break;
    case 8:
        printf("Grade B");
        break;
    case 7:
        printf("Grade C");
        break;
    case 6:
        printf("Grade D");
        break;
    case 5:
        printf("Grade E");
        break;
    case 4:
        printf("grade F");
        break;
    case 3:
        if(mark<40 && mark>=35){
            printf("Supplementary");
        }
        else{
            printf("fail");
        }
        break;
   default:
    printf("fail");
    
   } 
}