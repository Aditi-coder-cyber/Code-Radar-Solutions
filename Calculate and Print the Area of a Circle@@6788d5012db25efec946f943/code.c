#include <stdio.h>
int main(){
    float a,b;
    const float pi=3.14;
    scanf("%f",&a);
    b=pi*a*a;
    printf("Area: %.2f",b);
    return 0;
}