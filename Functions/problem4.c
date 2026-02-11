//Calculate Area of Circle Using Function
#include <stdio.h>
float area_circle(int r){
    float area=3.14*r*r;
    return area;
}
int main(){
    int radius;
    scanf("%d",&radius);
    printf("%.2f",area_circle(radius));
}