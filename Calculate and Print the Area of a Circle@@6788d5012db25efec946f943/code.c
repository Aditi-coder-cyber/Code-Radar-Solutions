#include <stdio.h>
int main(){
    float a,b;
    scanf("%f %f",&a,&b);
    b=3.14*(a**2);
    printf("Area: %.2f",b);
    return 0;
}