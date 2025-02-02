#include <stdio.h>
int main(){
    char str[100],st[100];
    int a;
    scanf("%99s %d %99s",&str,&a,&st);
    printf("Name: %s\n",str);
    printf("Age: %d\n",a);
    printf("Hobby: %s",st);
    return 0;
}