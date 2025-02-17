#include <stdio.h>
int main()
{
    int num;
    scanf("%d",&num);
    decimalToBinary(num);
    printf("\n");
    return 0;
void decimalToBinary(int num){
    if (num > 1){
        decimalToBinary(num/2);
    }
    printf("%d",num%2);
}}