#include <stdio.h>
int main(){
    int a,msb;
    scanf("%d",&a);
        msb=1<<(a-1);
        if(a&msb){
            printf("Set",a);
        }
        else{
        printf("Not Set",a);
    }
}