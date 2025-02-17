#include <stdio.h>
void decimaltobinary(int num){
    if(num>1){
        decimaltobinary(num/2);
    }
    printf("%d",num%2);
}
int main(){
    int num;
    scanf("%d",&num);
     decimaltobinary(num);
}
