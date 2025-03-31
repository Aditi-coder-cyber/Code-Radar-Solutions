#include <stdio.h>
int main(){
    int num;
    int i,j;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        for(j=1;j<=i-1;j--){
            printf("* ");
        }printf("\n");
    }
}