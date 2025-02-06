#include <stdio.h>
int main(){
    int a,msb;
    scanf("%d",&a);
    if (a&1){
        mcb=1<<(a-1);
        if(a&mcb){
            printf("Set %d",a);
        }
        else{
        printf("Not Set");
    }
}