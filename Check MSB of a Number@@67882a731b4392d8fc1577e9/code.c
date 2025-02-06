#include <stdio.h>
int main(){
    int a,msb;
    scanf("%d",&a);
    int bits=sizeof(bits)*8;
        msb=1<<(bits-1);
        if(a&msb){
            printf("Set",a);
        }
        else{
        printf("Not Set",a);
        return 0;
    }
}