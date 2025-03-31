#include <stdio.h>

int main() {
    int num,i,j,space;
    scanf("%d", &num);
    for(i=1;i<=num;i++){
        for(space=1;space<=num-i;space++){
            printf(" ");
        num--;
        }
        for(j=1;j<=i;j++){
            printf("*");
        }printf("\n");
    }}